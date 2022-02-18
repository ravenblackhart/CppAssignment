#include <iostream>
#include <string>
#include <cstdlib>
using namespace std; 

void printNum(string input)
{
    int size = input.length(); 

	for (int i = 0; i < size ; i++)
	{
        cout << input[i];

        if (i != size - 1) cout << " , "; 
	}

    cout << endl;
    
}

void printReverse(string input)
{
    int size = input.length();

    for (int i = size - 1; i >= 0; i--)
    {
        cout << input[i];
    }

    cout << endl;
}

bool isPalindrome(string input)
{

    int size = input.length();
    string temp = input;

    for (int i = 0; i < size; i++) {
        temp[i] = input[size - (i + 1)];

    }

    for (int y = 0; y < size; y++) {
        if (temp[y] != input[y]) return 0;
    }

}

int main()
{
    long long int number;
    int x = 0; 

    cout << "Printing Numbers\n" << endl;
    cout << "Enter a number with more than one digit :";
    cin >> number;

    string input = to_string(number);

    cout << "The first digit is " << input[0] << " & the last digit is " << input[input.length() - 1] << endl;
    cout << "There are " << input.length() << " digits in " << number << endl; 

    cout << "The digits making up this number are : ";
    printNum(input);

    cout << "The number in reverse is : ";
    printReverse(input);

    if (isPalindrome(input)) {

        cout << number << " is a palindrome.";
    }
    else {
        cout << number << " is NOT a palindrome.";
    }

    





    return 0; 

    


}
