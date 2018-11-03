#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

struct book
{

    int id;
    char namebook[30];
    char creator[50];
    int year;

};

struct book library[5];

void read()
{

    ifstream read_stream;
    read_stream.open("./file.txt");

    if (read_stream)
    {

        for (int i=0; i<4; i++)
        {

            read_stream >> library[i].id;
            read_stream >> library[i].namebook;
            read_stream >> library[i].creator;
            read_stream >> library[i].year;

        }
        read_stream.close();
    }
    else
        cout<<"No file!"<<endl;

}

void view ()
{

    for (int i=0; i<4; i++)
    {

        cout << library[i].id << " ";
        cout << library[i].namebook<< " ";
        cout << library[i].creator << " ";
        cout << library[i].year << endl;

    }
}

void old_book ()
{

    int t = 9999;
    int num = 0;

    for (int i=0; i<4; i++)
    {

        if (library[i].year < t)
        {

            t = library[i].year;
            num = i;

        }

    }

    cout << "The old edition - " << library[num].id <<" ";
    cout << library[num].namebook <<" ";
    cout << library[num].creator <<" ";
    cout << library[num].year << endl;

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

            write_stream << library[i].id << " ";
            write_stream << library[i].namebook << " ";
            write_stream << library[i].creator << " ";
            write_stream << library[i].year << endl;

        }
        write_stream.close();

}

void edit ()
{
    int row = 0;

    view();
    cout << "Select a row to edit - ";
    cin >> row;

    cout << "Book title - ";
    cin >> library[row].namebook;

    cout << "Workbook author - ";
    cin >> library[row].creator;

    cout << "Publication date - ";
    cin >> library[row].year;



}

int main ()
{

    int j = 1;

    while (j)
    {

        //system("clear");
        cout << "Menu"<< endl;
        cout << "1.Read"<< endl;
        cout << "2.View"<< endl;
        cout << "3.Edit"<< endl;
        cout << "4.Oldest book"<< endl;         //перепиcать на динамическую память?
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
