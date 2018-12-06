#include <iostream>
#include <string>
#include "Transport_vehicle.cpp"

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
 	Transport_vehicle();
	Transport_vehicle::Transport_vehicle(string M, string B, short int R, short int Q, short int Ma);
	~Transport_vehicle();

	string getModel();

	void setModel(const string Model);

	short getRelease_year();

	void setRelease_year(short Release_year);

	string getBrand();

	void setBrand(const string Brand);

	short getQuantity_of_passengers();

	void setQuantity_of_passengers(short Quantity_of_passengers);

	short getMax_speed();

	void setMax_speed(short Max_speed);

	virtual void Display();
};
