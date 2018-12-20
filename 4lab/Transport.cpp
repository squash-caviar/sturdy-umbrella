#include "Transport.h"

using namespace std;

Transport::Transport()
{
    Brand = "non";
    Release_year = 0;
}

Transport::Transport(string B, int R)
{
    Brand = B;
    Release_year = R;
}

Transport::~Transport()
{
}

int Transport::getRelease_year()
{
    return Transport::Release_year;
}

void Transport::Show()
{
    cout << "Brand: " << Transport::Brand << "Release_year: " << Transport::Release_year << endl; 
}
