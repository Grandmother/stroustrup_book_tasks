#include <iostream>

using namespace std;

int main()
{
    constexpr double cm_per_inch = 2.54;
    double length = 1;
    char unit = 0;
    cout << "Please enter a length and unit(c or i) please: ";
    cin >> length >> unit;

    if ( unit == 'i' )
    {
        cout << length << "in == "
            << cm_per_inch * length << "cm\n";
    }
    else if ( unit == 'c' )
    {
        cout << length << "cm == "
            << length / cm_per_inch << "in\n";
    }
    else
    {
        cout << "Excuse me, but I don't know '" << unit << "'\n";
    }

    return 0;
}
