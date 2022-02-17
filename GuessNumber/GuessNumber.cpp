#include <iostream>
using namespace std;

int main()
{
    int max;
    int min;
    int secret;
    int input; 

    cout << "Guess The Number\n" << endl;

    cout << " Give me a range of numbers to pick from, and then guess the number I picked from that range!\n" << endl;

    cout << "Enter Range Maximum :";
    cin >> max;

    cout << "Enter Range Minimum :";
    cin >> min;

    secret = rand() % max + min; 

    cout << "I picked a number. Guess the number! \n";
    cout << "Your guess :";
    cin >> input;

    while (input != secret)
    {
        cout << "That's not it! ";
        if (input < secret) cout << " The secret number is higher. ";
        else cout << "The secret number is lower. "; 
        cout << "Guess again! \n"; 
        cout << "Your guess :";
        cin >> input;
    }

    cout << "You got it! The secret number is " << secret << " . Yay! \n";

    return 0; 


}
