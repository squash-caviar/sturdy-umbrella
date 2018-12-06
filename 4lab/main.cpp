#include <iostream>
#include <string>
#include "Aircraft.h"
#include "Passenger_car.h"
#include "Transport_vehicle.h"

using namespace std;

class Transport_vehicle
{
private:
	string Model;
	string Brand;
	short int Release_year;
	short int Quantity_of_passengers;
	short int Max_speed;

public:
	virtual void Display(){}

};

class Passenger_car:public Transport_vehicle
{
private:
	string Engine_type;
	short int Engine_output;

public:
Passenger_car()
{
	Engine_type = "NaN";
	Engine_output = 404;
}

void Display()
{
	cout << "Engine_type: " << Engine_type << " Engine_output: " << Engine_output << endl;

}
   
};

class Aircraft:public Transport_vehicle
{
private:
	short int Flight_altitude;
	short int Wingspan;

public:
	Aircraft()
	{
		Flight_altitude = 404;
		Wingspan = 404;
	}
	
	void Display() 
	{
		cout << "Flight_altitude: " << Flight_altitude << " Wingspan: " << Wingspan << endl;

	}

};

int main()
{
	
	Passenger_car hp;
	Aircraft lg;
	Transport_vehicle *d1 = &hp;
	Transport_vehicle *d2 = &lg;

	d1->Display();
	d2->Display();

	return 0;
}


