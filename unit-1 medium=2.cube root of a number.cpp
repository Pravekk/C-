#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double number;
    cout << "Enter a number: ";
    cin >> number;
    double cubeRoot;
    if (number >= 0) 
	{
        cubeRoot = cbrt(number); 
    } else 
	{
        cubeRoot = -cbrt(-number); 
    }
    cout << "Cube root of " << number << " is: " << cubeRoot << endl;

    return 0;
}

