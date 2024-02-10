#include <iostream>
using namespace std;

int main() 
{
    int number, originalNumber, reversedNumber = 0, remainder;
    cout << "Enter a positive integer: ";
    cin >> number;

    originalNumber = number;
    while (number != 0) 
	{
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }
    if (originalNumber == reversedNumber) {
        cout << originalNumber << " is a palindrome number." << endl;
    } else 
	{
        cout << originalNumber << " is not a palindrome number." << endl;
    }

    return 0;
}

