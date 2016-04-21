#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;

    cout << "Enter the factors please: ";
    cin >> a >> b >> c;

    double D = b*b - 4*a*c;
    double x1, x2;
    if ( D > 0 )
    {
        x1 = (-b + sqrt(D)) / 2*a;
        x2 = (-b - sqrt(D)) / 2*a;

        cout << "x1 = " << x1 << '\n'
            << "x2 = " << x2 << '\n';
    }
    else if ( D == 0 )
    {
        x1 = -b / 2*a;
        cout << "x = " << x1 << '\n';
    }
    else
    {
        cout << "This equation has no real root.\n";
    }

    return 0;
}
