#include <iostream>
#include <string>

using namespace std;

class Passenger_car:public Transport_vehicle
{
private:
	string Engine_type;
	short int Engine_output;

public:
	Passenger_car();
	~Passenger_car();

	string getEngine_type() ;

	void setEngine_type( string Engine_type);

	short getEngine_output() ;

	void setEngine_output(short Engine_output);
};

