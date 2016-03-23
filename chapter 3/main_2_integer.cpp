#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Enter a integer number please: ";

    int number = 0;

    std::cin >> number;
    std::cout << "number = " << number
        << "\nnumber + 1 = " << number + 1
        << "\nnumber thrice = " << number * 3
        << "\nnumber twice = " << number + number
        << "\nnumber in power of two = " << number * number
        << "\nquotient of division number with 2 as divisor = " << number / 2
        << "\nremainder of division number with 2 as divisor = " << number % 2;
    double num = number;
    std::cout << "\nsquare root of number = " << std::sqrt(num)
        << "\n";

    return 0;
}
