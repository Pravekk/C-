#include <iostream>
using namespace std;

int findNthFibonacci(int n) 
{
    if (n <= 0) 
	{
        return -1; 
    } else if (n == 1 || n == 2) 
	{
        return 1; 
    } else 
	{
        int a = 1, b = 1;
        int fib = 0;
        for (int i = 3; i <= n; ++i) 
		{
            fib = a + b;
            a = b;
            b = fib;
        }
        return fib;
    }
}

int main() 
{
    int n;
    cout << "Enter the value of n to find the Nth Fibonacci number: ";
    cin >> n;

    int nthFibonacci = findNthFibonacci(n);

    if (nthFibonacci == -1) 
	{
        cout << "Invalid input. Please enter a positive integer greater than 0." << endl;
    } else 
	{
        cout << "The " << n << "th Fibonacci number is: " << nthFibonacci << endl;
    }

    return 0;
}

