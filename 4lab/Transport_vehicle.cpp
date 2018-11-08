#include <iostream>
#include <string>

using namespace std;

Transport_vehicle::Transport_vehicle()
{
}

 Transport_vehicle::~Transport_vehicle()
{
}

string Transport_vehicle::getModel()  {
	return Model;
}

void Transport_vehicle::setModel( string Model) {
	Transport_vehicle::Model = Model;
}

short Transport_vehicle::getRelease_year()  {
	return Release_year;
}

void Transport_vehicle::setRelease_year(short Release_year) {
	Transport_vehicle::Release_year = Release_year;
}

string Transport_vehicle::getBrand()  {
	return Brand;
}

void Transport_vehicle::setBrand(string Brand) {
	Transport_vehicle::Brand = Brand;
}

short Transport_vehicle::getQuantity_of_passengers()  {
	return Quantity_of_passengers;
}

void Transport_vehicle::setQuantity_of_passengers(short Quantity_of_passengers) {
	Transport_vehicle::Quantity_of_passengers = Quantity_of_passengers;
}

short Transport_vehicle::getMax_speed() {
	return Max_speed;
}

void Transport_vehicle::setMax_speed(short Max_speed) {
	Transport_vehicle::Max_speed = Max_speed;
} 
