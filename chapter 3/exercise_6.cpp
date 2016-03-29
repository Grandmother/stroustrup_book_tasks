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
    if ( c > b )
    {
        tmp = c;

    }
}
