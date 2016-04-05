#include <iostream>

double square ( double i )
{
    return i*i;
}

int main()
{
    std::cout << square(45) << '\n';
    std::cout << square(5) << '\n';

    return 0;
}
