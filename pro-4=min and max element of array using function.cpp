#include <iostream>
using namespace std;
void findMinMax(const int arr[], int size, int& min, int& max) 
{
    if (size == 0) 
	{
        min = max = 0;
        return;
    }
    min = max = arr[0];

    for (int i = 1; i < size; i++) 
	{
        if (arr[i] < min) 
		{
            min = arr[i]; 
        } else if (arr[i] > max) 
		{
            max = arr[i]; 
        }
    }
}

int main() 
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0) 
	{
        cout << "Invalid array size." << endl;
        return 1;
    }

    int arr[size];
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) 
	{
        cin >> arr[i];
    }

    int min, max;
    findMinMax(arr, size, min, max);

    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;

    return 0;
}

