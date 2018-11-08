#include "Passenger_car.h"

using namespace std;

Passenger_car::Passenger_car()
{
}

Passenger_car::~Passenger_car()
{
}


string Passenger_car::getEngine_type() {
	return Engine_type;
}

void Passenger_car::setEngine_type( string Engine_type) {
	Passenger_car::Engine_type = Engine_type;
}


short Passenger_car::getEngine_output() {
	return Engine_output;
}

void Passenger_car::setEngine_output(short Engine_output) {
	Passenger_car::Engine_output = Engine_output;
}

