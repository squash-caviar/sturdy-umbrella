#include <iostream>
#include <string>
#include "class.h"

using namespace std;

main()
{
	Mobile_phone Nokia_3310 ("Nokia", "3310");
	Nokia_3310.Power_on();
	Nokia_3310.Network_search();
	Nokia_3310.Printinfo();


	int j = 1;

	while (j)
	{

		cout << "Menu"<< endl;
		cout << "1. Info"<< endl;
		cout << "2. Power on"<< endl;
		cout << "3. Power off"<< endl;
		cout << "4. Flashlight_on"<< endl;
		cout << "5. Flashlight_off"<< endl;
		cout << "6. Volume_up"<< endl;
		cout << "7. Volume_down"<< endl;
		cout << "8. Network_search"<< endl;
		cout << "9. Exit"<< endl;
		cout << "enter a number to continue " << endl;

		int i = 0;

		cin >> i;

		cout << endl;

		switch ( i ) {

			case 1: 
			
				Nokia_3310.Printinfo();
				break;
			
			
			case 2:
			
				Nokia_3310.Power_on();
				break;
			

			case 3: 
			
				Nokia_3310.Power_off();
				break;
			

			case 4:
			
				Nokia_3310.Flashlight_on();
				break;


			case 5:
			
				Nokia_3310.Flashlight_off();
				break;
			

			case 6:

				Nokia_3310.Volume_up();
				break;

			case 7:

				Nokia_3310.Volume_down();
				break;


			case 8:

				Nokia_3310.Network_search();
				break;



			case 9:

				j =0;
				break;

			default:
			{
				cout << "doh"<< endl;
				cout << endl;
				break;
			}

		}
	}

	return 0;
}

