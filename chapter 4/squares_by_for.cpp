#include <iostream>

double square( double i )
{
    return i*i;
}

int main()
{
    for( int i = 0; i < 100; ++i )
    {
        std::cout << i << '\t' << square(i) << '\n';
    }
    return 0;
}
