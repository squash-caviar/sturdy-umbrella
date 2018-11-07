#include <iostream>
#include <string>
//#include <ctime>

using namespace std;

class Mobile_phone
{
private:

    bool Power_supply;
    bool Frash_light;
    short int Signal_level;
    long int IMEI;
    string Model;
    string Brand;

public:
    Mobile_phone();;

    Mobile_phone(string m, string b);;

    ~Mobile_phone();;

    void Power_on();;

    void Power_off();;

    void Flash_on();;

    void Flash_off();;

    void Network_search();;

    void Printinfo();;

};

Mobile_phone::Mobile_phone()
{
    Power_supply = 0;
    Frash_light = 0;
    Signal_level = 0;

    Model = "unknown";
    Brand = "unknown";

    long int temp;
    srand ( time(NULL) );
    temp = rand() % 2147483647 + 1000000000;
    
    if (temp > 0)
        IMEI = temp;
        else 
            IMEI = temp * -1;
}

Mobile_phone::Mobile_phone(string m, string b)
{
    Power_supply = 0;
    Frash_light = 0;
    Signal_level = 0;
    
    srand ( time(NULL) ); 
    IMEI = rand() % 5;
    Model = m;
    Brand = b;
}

Mobile_phone::~Mobile_phone()
{
}

void Mobile_phone::Power_on ()
{
    Power_supply = 1;
    Network_search();
}

void Mobile_phone::Power_off()
{
    Power_supply = 0;
    Frash_light = 0;
    Signal_level = 0;
}

void Mobile_phone::Flash_on()
{
    if (Power_supply) 
        Frash_light = 1;
}

void Mobile_phone::Flash_off()
{
    Frash_light = 0;
}

void Mobile_phone::Network_search()
{
    if (Power_supply)
        srand ( time(NULL) ); 
        Signal_level = rand() % 5;
}

void Mobile_phone::Printinfo()
{
    
    cout << "Brand: " << Brand << endl; 
    cout << "Model: " << Model << endl; 
    cout << "IMEI: " << IMEI << endl;
    cout << "Phone included: " << Power_supply << endl;
    cout << "Signal level: " << Signal_level << endl; 
    cout << "Flashlight included: " << Frash_light << endl;
     
}