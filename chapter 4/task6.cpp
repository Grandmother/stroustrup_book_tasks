#include <iostream>
#include <limits>
#include <vector>
#include <string>
#include <algorithm>
#include <exception>

using namespace std;

constexpr double m_cm = 100;
constexpr double in_cm = 2.54;
constexpr double ft_in = 12;

void print_prompt(const vector<string> units)
{
    cout << "Enter the measurements please.\n"
        << "Format: measurement unit\n "
        << "Available units: ";
    for ( string unit : units )
    {
        cout << unit << ' ';
    }
    cout << '\n';
}

int find_unit_index(const string& unit, const vector<string>& units)
{
    for ( int i : {0, 1, 2, 3} )
    {
        if ( unit == units[i] ) return i;
    }
    throw 74;
}

void convert(double& number, const int& unit_index)
{
    switch ( unit_index )
    {
        case 0:
            break;
        case 1:
            number *= m_cm;
            break;
        case 3:
            number *= ft_in;
            // ACHTUNG: No break!! Now we need to convert inches to centimiters
            // after converting feets to inches.
            [[fallthrough]]
        case 2:
            number *= in_cm;
            break;
    }
    return;
}

int main()
{
    double number;
    double min = numeric_limits<double>::max();
    double max = numeric_limits<double>::min();
    double sum = 0;
    string unit = "";
    vector<string> units {"cm", "m", "in", "ft"};
    vector<double> measurements;

    print_prompt(units);

    while ( cin >> number >> unit )
    {
        int unit_index = 0;

        try
        {
            unit_index = find_unit_index(unit, units);
        }
        catch (const int code)
        {
            cout << "Exception with error code: " << code << '\n';
            cout << "Try again:\n";
            continue;
        }

        cout << "Entered measurement: " << number << ' ' << unit <<  '\n';
        convert(number, unit_index);
        sum += number;
        measurements.push_back(number);

        if ( number < min )
        {
            min = number;
            cout << "Least number entered.\n";
        }
        if ( number > max )
        {
            cout << "Most number entered.\n";
            max = number;
        }

        cout << "\nAnd the next one please:\n";
    }
    cout << "Least measurement: " << min << "cm.\n"
        << "Most measurement: " << max << "cm.\n"
        << "Sum of all " << measurements.size() << " measurements: " << sum << "cm.\n";

    sort(measurements.begin(), measurements.end());
    cout << "All measurements(in centimeters):\n";
    for( double current : measurements )
    {
        cout << current << ' ';
    }
    cout << '\n';
    cout << "Good bye!!\n";
}
