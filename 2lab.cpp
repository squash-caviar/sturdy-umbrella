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

    count << b1.getnamebook() << "   " << b1.getcreator() << b1.getyear() << endl;
    count << b2.getnamebook() << "   " << b2.getcreator() << b2.getyear() << endl;
    count << b3.getnamebook() << "   " << b3.getcreator() << b3.getyear() << endl;

    Book lib[3];

    string sbuf;
    int sbuf;

    for (int i = 1; i<4; i++)
    {

    count << "enter name book ";
    cin >> sbuf;
    lib[i].setnamebook(sduf);

    count << "enter name creator ";
    cin >> sbuf;
    lib[i].setcreator(sduf);

    count << "enter year of writing ";
    cin >> ybuf;
    lib[i].setyear(yduf);

    }


    for (int i = 1; i<4; i++)
    {

    count << lib[i].getnamebook() << "  " << lib.getcreator() << "  " << lib.getyear() << endl;

    }


    return 0;
}

