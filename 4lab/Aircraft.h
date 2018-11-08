#include <iostream>
#include <string>

using namespace std;

class Aircraft:public Transport_vehicle
{
private:
	short int Flight_altitude;
	short int Wingspan;

public:
	Aircraft();
	~Aircraft();

	short getFlight_altitude();

	void setFlight_altitude(short Flight_altitude);

	short getWingspan();

	void setWingspan(short Wingspan);
};

