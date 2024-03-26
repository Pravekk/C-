#include <iostream>
#include <string>
#include <cctype> 
using namespace std;
bool isPalindrome(const string& str) 
{
    int left = 0;
    int right = str.length() - 1;

    while (left < right) 
	{
        while (!isalnum(str[left]) && left < right) 
		{
            left++;
        }
        while (!isalnum(str[right]) && left < right) 
		{
            right--;
        }
        if (tolower(str[left]) != tolower(str[right])) 
		{
            return false; 
        }
        left++;
        right--;
    }

    return true; 
}

int main() 
{
    string inputStr;
    cout << "Enter a string: ";
    getline(cin, inputStr);

    bool palindrome = isPalindrome(inputStr);

    if (palindrome) 
	{
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}

