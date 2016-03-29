#include <iostream>

int main()
{
    std::string number = " ";
    std::cout << "Enter the numerals please: ";
    while( std::cin >> number )
    {
        if ( number == "zero" )
        {
            std::cout << "0\n";
        }
        else if ( number == "one" )
        {
            std::cout << "1\n";
        }
        else if ( number == "two" )
        {
            std::cout << "2\n";
        }
        else if ( number == "three" )
        {
            std::cout << "3\n";
        }
        else if ( number == "four" )
        {
            std::cout << "4\n";
        }
        else
        {
            std::cout << "I don't know this numeral.\n";
        }
    }
    return 0;
}
