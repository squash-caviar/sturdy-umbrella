#include <iostream>
#include <string>

using namespace std;

class Book
{

private:

    string namebook;
    string creator;
    int year;

public:

    Book ();;

    Book (string, string, int);;



    void setnamebook (string temp);;

    void setcreator(string temp);;

    void setyear(int temp);;

    string getnamebook();;

    string getcreator();;

    int getyear();;


};

Book::Book() {

}

Book::Book(string, string, int) {
    namebook = "unknown";
    creator = "unknown";
    year = 404;
}

void Book::setnamebook(string temp) {
    namebook = temp;
}

void Book::setcreator(string temp) {
    creator = temp;
}

void Book::setyear(int temp) {
    year = temp;
}

string Book::getnamebook() {
    return namebook;
}

string Book::getcreator() {
    return creator;
}

int Book::getyear() {
    return year;
}


int main()
{

    Book b1;
    Book b2("The Engineers and the Price System" , "Thorstein Bunde Veblen" , 1921);
    Book b3("The Theory of Leisure Class" , "Thorstein Bunde Veblen" , 1899);

    b1.setnamebook("Harry Potter and the Methods of Rationality");
    b1.setcreator("Eliezer S. Yudkowsky");
    b1.setyear(2015);

    cout << b1.getnamebook() << "   " << b1.getcreator() << "   " << b1.getyear() << endl;
    cout << b2.getnamebook() << "   " << b2.getcreator() << "   " << b2.getyear() << endl;
    cout << b3.getnamebook() << "   " << b3.getcreator() << "   " << b3.getyear() << endl;

    Book lib[3];

    string sbuf= "NaN";
    int ybuf = 0;

    for (int i = 0; i<3; i++)
    {

        cout << "enter name book ";
        cin >> sbuf;
        lib[i].setnamebook(sbuf);

        cout << "enter name creator ";
        cin >> sbuf;
        lib[i].setcreator(sbuf);

        cout << "enter year of writing ";
        cin >> ybuf;
        lib[i].setyear(ybuf);

    }


    for (int i = 0; i<3; i++)
    {

        cout << lib[i].getnamebook() << "  " << lib[i].getcreator() << "  " << lib[i].getyear() << endl;

    }


    return 0;
}
