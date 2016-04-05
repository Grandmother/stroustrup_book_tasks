#include <iostream>

int main()
{
    constexpr double cm_per_inch = 2.54;
    double length {1};
    char unit {'a'};

    std::cout << "Enter the length and the unit(c/i) please: ";
    std::cin >> length >> unit;

    switch ( unit )
    {
        case 'c':
            std::cout << length << "in == "
                << cm_per_inch * length << "cm\n";
            //break;
        case 'i':
            std::cout << length << "cm == "
                << length / cm_per_inch << "in\n";
            //break;
        default:
            std::cout << "I don't know this sufix.\n";
            return 1;
    }
    return 0;
}
