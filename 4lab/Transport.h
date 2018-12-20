#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <iostream>
#include <string>

using namespace std;


class Transport
{
protected:
	string Brand;
	int Release_year;

public:
    Transport();
    Transport(string B, int R);
    ~Transport();
    virtual void Show();
    int getRelease_year();
};

#endif //TRANSPORT_H