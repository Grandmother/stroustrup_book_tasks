#include <iostream>

int main()
{
    std::string first_name;

    std::cout << "Enter your first name (and press 'Enter'): ";
    std::cin >> first_name;
    std::cout << "Hello, " << first_name << "!\n";

    return 0;
}
