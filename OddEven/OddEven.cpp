#include <iostream>
using namespace std; 

int main()
{
	int input; 

	cout << "Odd or Even\n" << endl;

	cout << "Enter an integer :";
	cin >> input;

	if (input % 2 == 0) cout << input << " is an even number.\n";
	else  cout << input << " is an odd number.\n";

	return 0;

}
