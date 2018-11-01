#include <iostream>

using namespace std;

class Book
{

public:

    Book(string, string, int)
    {

        namebook = "unknown";
        creator = "unknown";
        year = 404;

    };

    ~Book();

    void setnamebook(string temp)
    {

        namebook = temp;

    };

    void setcreator(string temp)
    {

        creator = temp;

    };

    void setyear(int temp)
    {

        year = temp;

    };

    string getnamebook()
    {

        return namebook;

    };

    string getcreator()
    {

        return creator;

    };

    int getyear()
    {

        return year;

    };

private:

    string namebook;
    string creator;
    int year;
};



int main()
{

    Book b1();
    Book b2("The Engineers and the Price System" , "Thorstein Bunde Veblen" , 1921);
    Book b3("The Theory of Leisure Class" , "Thorstein Bunde Veblen" , 1899);

    b1.setnamebook("Harry Potter and the Methods of Rationality");
    b1.setcreator("Eliezer S. Yudkowsky");
    b1.setyear("2015")

    cout << b1.getnamebook() << "   " << b1.getcreator() << b1.getyear() << endl;
    cout << b2.getnamebook() << "   " << b2.getcreator() << b2.getyear() << endl;
    cout << b3.getnamebook() << "   " << b3.getcreator() << b3.getyear() << endl;

    Book lib[3];

    string sbuf= "NaN";
    int ybuf = 0;

    for (int i = 1; i<4; i++)
    {

    cout << "enter name book ";
    cin >> sbuf;
    lib[i].setnamebook(sduf);

    cout << "enter name creator ";
    cin >> sbuf;
    lib[i].setcreator(sduf);

    cout << "enter year of writing ";
    cin >> ybuf;
    lib[i].setyear(yduf);

    }


    for (int i = 1; i<4; i++)
    {

    cout << lib[i].getnamebook() << "  " << lib.getcreator() << "  " << lib.getyear() << endl;

    }


    return 0;
}
