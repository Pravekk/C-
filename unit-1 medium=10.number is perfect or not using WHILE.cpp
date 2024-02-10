#include <iostream>
using namespace std;

bool isPerfect(int num) 
{
    int sum = 0;
    int divisor = 1;
    
    while (divisor <= num / 2) 
	{
        if (num % divisor == 0) 
		{
            sum += divisor;
        }
        divisor++;
    }
    
    return sum == num;
}

int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPerfect(num)) 
	{
        cout << num << " is a perfect number." << endl;
    } else 
	{
        cout << num << " is not a perfect number." << endl;
    }

    return 0;
}

