#include <iostream>
#include <string>
using namespace std;
int countElements(const string& str) 
{
    int count = 0;
    for (size_t i = 0; i < str.length(); i++) 
	{
        count++;
    }
    return count;
}

int main() 
{
    string inputStr;
    cout << "Enter a string: ";
    getline(cin, inputStr);

    int elementCount = countElements(inputStr);

    cout << "Number of elements in the string: " << elementCount << endl;

    return 0;
}

