#include <iostream>

using namespace std;

int main()
{
    int a {0};
    int b {0};

    cout << "Enter two integer numbers please: ";
    cin >> a >> b;

    if ( a < b )
    {
        cout << "max( " << a << ',' << b << " ) -- " << b << '\n';
    }
    else
    {
        cout << "max( " << a << ',' << b << " ) -- " << a << '\n';
    }

    return 0;
}
