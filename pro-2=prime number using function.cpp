#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int num) 
{
    if (num <= 1) 
	{
        return false; 
    }
    
    int sqrtNum = sqrt(num); 
    
    for (int i = 2; i <= sqrtNum; i++) 
	{
        if (num % i == 0) 
		{
            return false; 
        }
    }
    
    return true; 
}

int main() 
{
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number <= 0) 
	{
        cout << "Invalid input. Please enter a positive integer." << endl;
    } else {
        bool prime = isPrime(number);
        
        if (prime) 
		{
            cout << number << " is a prime number." << endl;
        } else 
		{
            cout << number << " is not a prime number." << endl;
        }
    }

    return 0;
}

