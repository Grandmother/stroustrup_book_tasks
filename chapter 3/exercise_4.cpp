#include <iostream>

int main()
{
    int val1 = 0;
    int val2 = 0;

    std::cout << "Enter two integer values please: ";
    std::cin >> val1 >> val2;

    if ( val1 < val2 )
    {
        std::cout << val1 << " is less than " << val2 << '\n';
    }
    else if ( val1 > val2 )
    {
        std::cout << val1 << " is higher than " << val2 << '\n';
    }
    else
    {
        std::cout << val1 << " is equal to " << val2 << '\n';
    }

    std::cout << "sum of values: " << val1 + val2 << '\n';
    std::cout << "first value substract second value: " << val1 - val2 << '\n';
    std::cout << "second value substract first value: " << val2 - val1 << '\n';
    std::cout << "first value devide to second value: " << val1 / val2 << '\n';
    std::cout << "second value devide to first value: " << val2 / val1 << '\n';
    std::cout << "product of values: " << val1 * val2 << '\n';

    return 0;
}
