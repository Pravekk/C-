#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int sum = 0;
    int count = 0;
    cout << "Enter " << n << " numbers: ";
    
    do 
	{
        int num;
        cin >> num;
        sum += num;
        count++;
    } 
	while (count < n);

    cout << "The sum of the entered numbers is: " << sum << endl;

    return 0;
}

