#include <iostream>

int main()
{
    char i = 'a';
    while ( i <= 'z')
    {
        std::cout << i++ << ' ' << int(i) << '\n';
    }

    return 0;
}
