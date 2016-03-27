#include <iostream>

int main()
{
    std::cout << "Enter a number please: ";

    int number = 0;
    std::cin >> number;

    if ( number % 2 == 1 )
    {
        std::cout << "The number (" << number << ") is odd.\n";
    }
    else
    {
        std::cout << "The number (" << number << ") is even.\n";
    }

    return 0;
}
