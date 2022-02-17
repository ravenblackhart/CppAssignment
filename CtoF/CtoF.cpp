#include <iostream>
using namespace std;

int main()
{
	float degC;
	float degF; 
	
	cout << "Convert from Celcius to Farenheit\n" << endl;
    cout << "Input temperature in Celcius :";
	cin >> degC;

	degF = degC * 9 / 5 + 32; 

	cout << "The temperature in Fahrenheit is " << degF << "\370F" << endl; 

	return 0; 

}

