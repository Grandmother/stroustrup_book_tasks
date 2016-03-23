#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Enter a floating point number please: ";

    double number = 0;

    std::cin >> number;
    std::cout << "number = " << number
        << "\nnumber + 1 = " << number + 1
        << "\nnumber thrice = " << number * 3
        << "\nnumber twice = " << number + number
        << "\nnumber in power of two = " << number * number
        << "\nhalf of number = " << number / 2
        << "\nsquare root of number = " << std::sqrt(number)
        << "\n";

    return 0;
}
