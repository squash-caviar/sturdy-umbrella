#include <iostream>
#include <string>

using namespace std;


class Transport_vehicle
{
private:


protected:
	string Model;
	string Brand;
	short int Release_year;
	short int Quantity_of_passengers;
	short int Max_speed;


public:
 	Transport_vehicle();;
	~Transport_vehicle();;
};

 Transport_vehicle::Transport_vehicle()
{
}

 Transport_vehicle::~Transport_vehicle()
{
}


class Aircraft:public Transport_vehicle
{
private:
	short int Flight_altitude;
	short int Wingspan;
	
public:
	Aircraft();
	~Aircraft();
};

Aircraft::Aircraft()
{
}

Aircraft::~Aircraft()
{
}




class Passenger_car:public Transport_vehicle
{
private:
	string Engine_type;
	short int Engine_output;
	
public:
	Passenger_car();
	~Passenger_car();
};

Passenger_car::Passenger_car()
{
}

Passenger_car::~Passenger_car()
{
}


