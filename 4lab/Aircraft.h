#include <iostream>
#include <string>
#include "Aircraft.cpp"

using namespace std;

class Aircraft:public Transport_vehicle
{
private:
	short int Flight_altitude;
	short int Wingspan;

public:
	Aircraft();
	Aircraft::Aircraft(short int F, short int W);
	~Aircraft();

	short getFlight_altitude();

	void setFlight_altitude(short Flight_altitude);

	short getWingspan();

	void setWingspan(short Wingspan);

	void Display();
};

