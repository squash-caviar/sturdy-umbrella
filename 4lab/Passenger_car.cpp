#include "Passenger_car.h"

using namespace std;

Passenger_car::Passenger_car()
{
    Quantity_of_passengers = 0;
}

Passenger_car::Passenger_car(string B, int R, int Q)
{
    Brand = B;
    Release_year = R;
    Quantity_of_passengers = Q;
}

Passenger_car::~Passenger_car()
{
}

void Passenger_car::Show()
{
    cout << "Brand: " << Transport::Brand << " Release_year: " << Transport::Release_year;
    cout << " Quantity_of_passengers: " << Passenger_car::Quantity_of_passengers << endl;
}
