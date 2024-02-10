#include <iostream>
#include <string>
using namespace std;

class CaseConverter 
{
private:
    string str;

public:
    CaseConverter(string input) 
	{
        str = input;
    }

    string toLowerCase() 
	{
        string result = "";
        for (size_t i = 0; i < str.length(); ++i) 
		{
            result += tolower(str[i]);
        }
        return result;
    }

    string toUpperCase() 
	{
        string result = "";
        for (size_t i = 0; i < str.length(); ++i) 
		{
            result += toupper(str[i]);
        }
        return result;
    }
};

int main() 
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    CaseConverter converter(input);

    cout << "Converted to upper case: " << converter.toUpperCase() << endl;
    cout << "Converted to lower case: " << converter.toLowerCase() << endl;

    return 0;
}

