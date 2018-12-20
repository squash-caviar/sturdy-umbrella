#include <iostream>
#include "Transport.h"
#include "Passenger_car.h"
#include "Aircraft.h"

using namespace std;

int main ()
{

    Passenger_car VAZ("VAZ", 1998, 4);
    Passenger_car Mazda("Mazda", 1995, 5);
    Aircraft Airobus("Airobus",2010, 150);
    Aircraft Boeng("Boeng", 2006 , 165);

    Transport* tr[4];

    tr[0] = &VAZ;
    tr[1] = &Mazda;
    tr[2] = &Airobus;
    tr[3] = &Boeng;

    int max = 1000, i = 0, n = 0;

    for(i=0; i<4; i++)
        tr[i]->Show();

    for(i = 0; i < 4; i++)
    {
        if (max < tr[i]->getRelease_year())
            {
                max = tr[i]->getRelease_year();
                n = i;
            }
    }       

    cout << "The newest vehicle is " << endl;
    tr[n]->Show();

    return 0;

}