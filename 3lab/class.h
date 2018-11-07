#include <iostream>
#include <string>

using namespace std;

class Mobile_phone
{
private:

    bool Power_supply;
    bool Frash_light;
    short int Signal_level;
    short int IMEI;
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

    string getinfo();;

};

Mobile_phone::Mobile_phone()
{
    Power_supply = 0;
    Frash_light = 0;
    Signal_level = 0;
    IMEI = rand() % (1000000000 - RAND_MAX) + RAND_MAX;
    Model = "unknown";
    Brand = "unknown";
}

Mobile_phone::Mobile_phone(string m, string b)
{
    Power_supply = 0;
    Frash_light = 0;
    Signal_level = 0;
    IMEI = rand() % (1000000000 - RAND_MAX) + RAND_MAX;
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
        Signal_level = rand() % (1 - 5) + 5;
}

string Mobile_phone::getinfo()
{
    string info;
    /*Power_supply 
    Frash_light 
    Signal_level 
    IMEI 
    Model 
    Brand */
    return info;
}