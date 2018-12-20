#include "Aircraft.h"

using namespace std;

Aircraft::Aircraft()
{
}

Aircraft::Aircraft(string B, int R, int W)
{
    Brand = B;
    Release_year = R;
    Wingspan = W;
}

Aircraft::~Aircraft()
{
}

void Aircraft::Show()
{
    cout << "Brand: " << Transport::Brand << " Release_year: " << Transport::Release_year;
    cout << " Wingspan: " << Aircraft::Wingspan << endl;
}