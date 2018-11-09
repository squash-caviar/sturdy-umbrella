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

	int getyear();

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
