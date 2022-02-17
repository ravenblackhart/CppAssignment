#include <iostream>
#include <string>
using namespace std; 

int main()
{
    int number;

    cout << "Printing Numbers\n" << endl;
    cout << "Enter a number with more than one digit :";
    cin >> number;

	string input = to_string(number);
    int x = static_cast<int>(input.length()); 

    int digits[x];

    for (int y = 0; y < x; y++)
    {
        char temp = input.at(y);
        digits[y] = temp;
        cout << digits[y] << " . "; 
    }

    return 0; 

    


}
