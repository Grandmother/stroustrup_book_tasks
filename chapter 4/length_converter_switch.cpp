#include <iostream>

using namespace std;

int main()
{
    constexpr double cm_per_inch {2.54};
    double length {1};
    char unit {'a'};
    cout << "Please enter a length and unit(c or i) please: ";
    cin >> length >> unit;

    switch ( unit )
    {

        case 'i':
            cout << length << "in == "
                << cm_per_inch * length << "cm\n";
            break;
        case 'c':
            cout << length << "cm == "
                << length / cm_per_inch << "in\n";
            break;
        default:
            cout << "Excuse me, but I don't know '" << unit << "'\n";
            break;
    }

    return 0;
}
