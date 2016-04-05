#include <iostream>

int square ( int base )
{
    int total = 0;
    for ( int i = 1; i <= base; ++i )
    {
        total += base;
    }
    return total;
}

int main()
{
    std::cout << square(45) << '\n';
    std::cout << square(5) << '\n';

    return 0;
}
