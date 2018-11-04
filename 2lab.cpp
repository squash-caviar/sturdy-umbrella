#include <iostream>
#include <string>
#include <fstream>

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
    namebook = "unknown";
    creator = "unknown";
    year = 404;
}

Book::Book(string s, string st, int t) {
    namebook = s;
    creator = st;
    year = t;
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

void read()
{

    ifstream read_stream;
    read_stream.open("./file.txt");
    
    string sbuf;
    int ybuf;
    
    if (read_stream)
    {

        for (int i = 0; i<3; i++)
        {

            read_stream >> sbuf;
            lib[i].setnamebook(sbuf);

            read_stream >> sbuf;
            lib[i].setcreator(sbuf);
     
            read_stream >> ybuf;
            lib[i].setyear(ybuf);

        }
    read_stream.close();
    }
    
    else
        cout<<"No file!"<<endl;
}


void view ()
{

for (int i = 0; i<3; i++)
    cout << lib[i].getnamebook() << "  " << lib[i].getcreator() << "  " << lib[i].getyear() << endl; 
}


void old_book ()
{

    int t = 9999;
    int num = 0;

    for (int i=0; i<3; i++)
    {

        if (lib[i].year < t)
        {

            t = lib[i].year;
            num = i;

        }

    }

    cout << "The old edition - " << lib[num].getnamebook() << "  " << lib[num].getcreator() << "  " << lib[num].getyear() << endl;

}


void edit ()
{
    int row = 0;

    view();
    cout << "Select a row to edit - ";
    cin >> row;

    cout << "Book title - ";
    cin >> lib[row].setnamebook();

    cout << "Workbook author - ";
    cin >> lib[row].setcreator();

    cout << "Publication date - ";
    cin >> lib[row].setyear();

}

void save ()
{

    string file_name;
    cout << "Save as.. ";
    cin >> file_name;
    file_name = "./ " + file_name + ".txt";

    ofstream write_stream;
    write_stream.open(file_name);

        for (int i=0; i<4; i++)
        {

            write_stream << lib[i].getnamebook() << " ";
            write_stream << lib[i].getcreator() << " ";
            write_stream << lib[i].getyear() << endl;

        }
        write_stream.close();

}

int main()
{

    Book b1;
    cout << b1.getnamebook() << "   " << b1.getcreator() << "   " << b1.getyear() << endl;

    Book b2 ("The Engineers and the Price System" , "Thorstein Bunde Veblen" , 1921);
    Book b3 ("The Theory of Leisure Class" , "Thorstein Bunde Veblen" , 1899);

    b1.setnamebook("Harry Potter and the Methods of Rationality");
    b1.setcreator("Eliezer S. Yudkowsky");
    b1.setyear(2015);

    cout << b1.getnamebook() << "   " << b1.getcreator() << "   " << b1.getyear() << endl;
    cout << b2.getnamebook() << "   " << b2.getcreator() << "   " << b2.getyear() << endl;
    cout << b3.getnamebook() << "   " << b3.getcreator() << "   " << b3.getyear() << endl;

    Book lib[3];

    string sbuf;
    int ybuf;

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


int j = 1;

    while (j)
    {

        
        cout << "Menu"<< endl;
        cout << "1.Read"<< endl;
        cout << "2.View"<< endl;
        cout << "3.Edit"<< endl;
        cout << "4.Oldest book"<< endl;         
        cout << "5.Saving in new file "<< endl;
        cout << "6.Exit"<< endl;
        cout << "press to ";

        int i = 0;

        cin >> i;

        cout << endl;

        switch ( i )
        {

        case 1:

            read();
            cout << endl;
            break;

        case 2:

            view();
            cout << endl;
            break;

        case 3:

            edit();
            cout << endl;
            break;

        case 4:

            old_book();
            cout << endl;
            break;

        case 5:

            save();
            cout << endl;
            break;

        case 6:

            j = 0;
            break;


        default:

            cout << "doh"<< endl;
            cout << endl;
            break;

        }
    }


    return 0;
}
