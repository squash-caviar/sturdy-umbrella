#include "Aircraft.h"

using namespace std;

Aircraft::Aircraft()
{
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

