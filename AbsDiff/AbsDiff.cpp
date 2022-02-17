#include <iostream>
using namespace std;

int main()
{
	float A;
	float B;

	cout << "Absolute Difference \n" << endl;

	cout << "Please Enter First Number :";
	cin >> A;

	cout << "Please Enter Second Number :";
	cin >> B;

	auto diff = A - B;
	cout << A << " - " << B << " = " << diff << endl;

	if (diff < 0) diff *= -1;
	cout << "The Absolute Difference between " << A << " & " << B << " is " << diff << endl;

	return 0; 
}