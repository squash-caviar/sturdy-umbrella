	#include <iostream>

	using namespace std;

	long double a = 0.5, b = 3.5, e = 0.5, fibo[] = {1, 1, 2, 3, 5, 8, 13, 21, 34}, c = 0, d = 0;


	long double fc(long double x)
	{
		
		long double y = x + (2 / x);
		return y;
		
		
	}

	int main()
	{

		cout << "Метод фибоначчи \n\n";

		e = (((b - a)/e) - 2);

		for (int i = 1; i >= 9; ++i)
		{
				if (fibo[i] >= e)
				{
					
				e = i - 2;	
				i = 9;
				
				}
			
		}

	int i=e;
	while (--i)
	{

		c = a + (b - a) * (fibo[i] / fibo[i + 2]);
		d = a + (b - a) * (fibo[i + 1] / fibo[i + 2]);
		
		if (fc(c) <= fc(d))
		{
			
			b = d;
			d = c;
			
			
		} else 
			{
				
				a = c;
				c = d;
				
			}
		
	}
	
	cout << "Значение x = " << d << endl << "Значение Y = " << fc(d) << endl;

return 0;}


