#include <iostream>
using namespace std;
double celsiusToFahrenheit(double celsius) 
{
    return (celsius * 9.0 / 5.0) + 32.0;
}
double fahrenheitToCelsius(double fahrenheit) 
{
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() 
{
    double tempCelsius, tempFahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> tempCelsius;

    tempFahrenheit = celsiusToFahrenheit(tempCelsius);
    cout << "Temperature in Fahrenheit: " << tempFahrenheit << " F" << endl;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> tempFahrenheit;

    tempCelsius = fahrenheitToCelsius(tempFahrenheit);
    cout << "Temperature in Celsius: " << tempCelsius << " C" << endl;

    return 0;
}

