#include <iostream>

int main()
{
    std::string first_name;
    unsigned int age = 0;

    std::cout << "Enter your first name and your age (and press 'Enter'): ";
    std::cin >> first_name;
    std::cin >> age;
    std::cout << "Hello, " << first_name << "!\nYou are " << age << " years old and you are dying.\n";

    return 0;
}
