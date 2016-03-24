#include <iostream>

int main()
{
    std::cout << "Enter a distance in miles: ";

    double miles = 0;
    std::cin >> miles;
    std::cout << miles << " miles is " << miles*1.609 << " kilomiters.\n";

    std::cin.get();
    std::cin.get();
    return 0;
}
