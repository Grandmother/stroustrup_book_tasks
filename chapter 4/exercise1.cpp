#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Enter pairs of intger numers please:" << '\n';

    double first, second;

    while ( cin >> first >> second )
    {
        cout << "Numbers are:" << first << " and " << second << "\n";
        if ( first < second )
        {
            cout << first << " is least.\n";
            cout << second << " is most.\n";

        }
        else if ( second < first )
        {
            cout << second << " is least.\n";
            cout << first << " is most.\n";
        }
        else
        {
            cout << "The numbers are equal.\n";
        }
        cout << "\nAnd again please:" << '\n';
    }

    return 0;
}
