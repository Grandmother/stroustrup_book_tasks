#include <iostream>

int main()
{
    int a = 2000;
    char c = a;
    int b = c;

    if (a != b)
    {
        std::cout << "Oooops! " << a << " != " << b << '\n';
    }
    else
    {
        std::cout << "Wow! char is so big on this here!" << '\n';
    }

    return 0;
}
