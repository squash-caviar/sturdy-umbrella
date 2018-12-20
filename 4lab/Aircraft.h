#ifndef AIRCRAFT_H
#define AIRCRAFT_H

#include <iostream>
#include <string>
#include "Transport.h"

using namespace std;


class Aircraft:public Transport
{
private:
    int Wingspan;
public:
    Aircraft();
    Aircraft(string B, int R, int W);
    ~Aircraft();
    void Show();
};



#endif