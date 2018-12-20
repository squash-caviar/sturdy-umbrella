#ifndef PASSENGER_CAR_H
#define PASSENGER_CAR_H

#include <iostream>
#include <string>
#include "Transport.h"

using namespace std;


class Passenger_car:public Transport
{
private:
    int Quantity_of_passengers;
public:
    Passenger_car();
    Passenger_car(string B, int R, int Q);
    ~Passenger_car();
    void Show();
};

#endif //PASSENGER_CAR_H