#include <iostream>
using namespace std;

int findMissingElement(int arr[], int n) 
{
    int left = 0;
    int right = n - 1;
    
    while (left <= right) 
	{
        int mid = left + (right - left) / 2;
        if (arr[mid] != mid + 1 && (mid == 0 || arr[mid - 1] == mid))
            return mid + 1;
        if (arr[mid] == mid + 1)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() 
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " sorted array elements: ";
    for (int i = 0; i < n; i++) 
	{
        cin >> arr[i];
    }
    
    int missingElement = findMissingElement(arr, n);
    
    if (missingElement != -1)
        cout << "The smallest missing element is: " << missingElement << endl;
    else
        cout << "No missing element found." << endl;
    
    return 0;
}

