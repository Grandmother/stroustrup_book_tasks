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
            if ( second - first < 0.1 )
            {
                cout << "But they are almost equal. Difference is: " << second - first << '\n';
            }

        }
        else if ( second < first )
        {
            cout << second << " is least.\n";
            cout << first << " is most.\n";
            if ( first - second < 0.1 )
            {
                cout << "But they are almost equal. Difference is: " << first - second << '\n';
            }
        }
        else
        {
            cout << "The numbers are equal.\n";
        }
        cout << "\nAnd again please:" << '\n';
    }

    return 0;
}
