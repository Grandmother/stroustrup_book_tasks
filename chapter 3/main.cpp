#include <iostream>

int main()
{
    std::string first_name, second_name;
    double age = -1;

    std::cout << "Enter your first and second name and your age (and press 'Enter'): ";
    std::cin >> first_name >> second_name >> age;
    std::cout << "Hello, " << first_name << " " << second_name << "!\nYou are " << static_cast<int>(age*12) << " month old and you are dying.\n";

    return 0;
}
