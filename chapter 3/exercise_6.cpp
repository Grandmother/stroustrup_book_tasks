#include <iostream>

int main()
{
    std::cout << "Enter three numbers please: ";
    std::string a, b, c, tmp;
    std::cin >> a >> b >> c;

    if ( a > c )
    {
        tmp = a;
        a = c;
        c = tmp;
    }
    if ( b > c )
    {
        tmp = c;
        c = b;
        b = tmp;
    }
    if ( a > b )
    {
        tmp = b;
        b = a;
        a = tmp;
    }
    std::cout << a << ' ' << b << ' ' << c << '\n';

    return 0;
}
