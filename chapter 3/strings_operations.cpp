#include <string>
#include <iostream>

int main()
{
    std::cout << "Enter your first and second names please: ";
    
    std::string first_name, second_name;

    std::cin >> first_name >> second_name;
    
    std::string name = first_name + ' ' + second_name;

    std::cout << name << '\n';
}
