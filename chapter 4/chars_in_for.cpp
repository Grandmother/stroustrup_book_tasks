#include <iostream>

int main ()
{
    for ( char i = 'a'; i <= 'z'; ++i )
    {
        std::cout << i << '\t' << int( i ) << '\n';
    }
    std::cout << '\n';

    for ( char i = '0'; i <= '9'; ++i )
    {
        std::cout << i << '\t' << int( i ) << '\n';
    }
    std::cout << '\n';

    for ( char i = 'A'; i <= 'Z'; ++i )
    {
        std::cout << i << '\t' << int( i ) << '\n';
    }
}
