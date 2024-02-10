#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double number;
    cout << "Enter a number: ";
    cin >> number;
    double squareRoot;
    if (number >= 0) 
	{
        squareRoot = sqrt(number);
    } else 
	{
        cout << "Cannot calculate square root of a negative number." << endl;
        return 1;
    }
    cout << "Square root of " << number << " is: " << squareRoot << endl;

    return 0;
}

