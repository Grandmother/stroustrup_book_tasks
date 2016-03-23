#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter two names please: ";
    std::string first, second;
    std::cin >> first >> second;

    if (first == second)
    {
        std::cout << "The names are same.\n";
    }
    if ( first < second )
    {
        std::cout << first << " is less than " << second
            << " in alphabetical order\n";
    }
    if ( first > second )
    {
        std::cout << first << " is greater than " << second
            << " in alpshabetical order\n";
    }
    return 0;
}
