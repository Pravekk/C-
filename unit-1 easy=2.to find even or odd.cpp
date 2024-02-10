#include <iostream>
using namespace std;

int main() 
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    string result = (number % 2 == 0) ? "even" : "odd";
    cout << number << " is an " << result << " number." << endl;
    return 0;
}

