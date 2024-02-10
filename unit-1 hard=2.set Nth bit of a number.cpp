#include <iostream>
int setNthBit(int num, int n) 
{
    int mask = 1 << (n - 1);
    return num | mask;
}

int main() 
{
    int num, n;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "Enter the bit position (1-indexed): ";
    std::cin >> n;
    
    if (n < 1 || n > 32) 
	{
        std::cerr << "Invalid bit position. It should be between 1 and 32." << std::endl;
        return 1;
    }
    int result = setNthBit(num, n);
    
    std::cout << "Number after setting the " << n << "th bit: " << result << std::endl;
    
    return 0;
}

