#include <iostream>

int main()
{
    std::cout << "Enter three numbers please: ";
    int a, b, c;
    std::cin >> a >> b >> c;

    if ( a > b )
    {
        if ( a > c )
        {
            if ( b > c )
            {
                std::cout << a << ' ' << b << ' ' << c << ";\n";
            }
            else
            {
                std::cout << a << ' ' << c << ' ' << b << ";\n";
            }
        }
        else
        {
                std::cout << c << ' ' << a << ' ' << b << ";\n";
        }
    }
    else
    {
        if ( a < c )
        {
            if ( b < c )
            {
                std::cout << c << ' ' << b << ' ' << a << ";\n";
            }
            else
            {
                std::cout << b << ' ' << c << ' ' << a << ";\n";
            }
        }
        else
        {
            std::cout << b << ' ' << a << ' ' << c << ";\n";
        }
    }
    return 0;
}
