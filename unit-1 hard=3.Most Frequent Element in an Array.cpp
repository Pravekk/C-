#include <iostream>
#include <map>
#include <vector>
using namespace std;

int findMostFrequentElement(const vector<int>& arr) {
    map<int, int> frequency;
    int mostFrequent = -1;
    int maxFrequency = 0;

    for (int i = 0; i < arr.size(); ++i) {
        frequency[arr[i]]++;
        if (frequency[arr[i]] > maxFrequency) {
            mostFrequent = arr[i];
            maxFrequency = frequency[arr[i]];
        }
    }

    return mostFrequent;
}

int main() {
    int size;
    cout << "Enter size of the array: ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter elements in the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int mostFrequent = findMostFrequentElement(arr);
    cout << "The most frequent element in the array is: " << mostFrequent << endl;

    return 0;
}

