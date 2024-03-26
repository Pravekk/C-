#include <iostream>
using namespace std;

const double PI = 3.14159; 
double calculateArea(double radius) 
{
    return PI * radius * radius;
}

int main() 
{
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    if (radius < 0) 
	{
        cout << "Invalid radius. Please enter a non-negative value." << endl;
        return 1;
    }

    double area = calculateArea(radius);

    cout << "Area of the circle with radius " << radius << " units: " << area << " square units" << endl;

    return 0;
}

