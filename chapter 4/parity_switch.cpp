#include <iostream>

int main()
{
    std::cout << "Enter the number please: ";
    char a;
    std::cin >> a;

    switch ( a )
    {
        case '0':
        case '2':
        case '4':
        case '6':
        case '8':
            std::cout << "The number is even.\n";
            break;
        case '1':
        case '3':
        case '5':
        case '7':
        case '9':
            std::cout << "The number is odd.\n";
            break;
        default:
            std::cout << "I don't know this number.\n";
    }
    return 0;
}
