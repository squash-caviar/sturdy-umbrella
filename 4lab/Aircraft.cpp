#include <iostream>
#include <string>
using namespace std;

Aircraft::Aircraft()
{
	Flight_altitude = 404;
	Wingspan = 404;
}

Aircraft::Aircraft(short int F, short int W)
{
	Flight_altitude = F;
	Wingspan = W;
}

Aircraft::~Aircraft()
{
}

short Aircraft::getFlight_altitude() {
	return Flight_altitude;
}

void Aircraft::setFlight_altitude(short Flight_altitude) {
	Aircraft::Flight_altitude = Flight_altitude;
}

short Aircraft::getWingspan()  {
	return Wingspan;
}

void Aircraft::setWingspan(short Wingspan) {
	Aircraft::Wingspan = Wingspan;
}

void Aircraft::Display()
    {
		cout << Flight_altitude << Wingspan;
    }