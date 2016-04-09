#include <iostream>
#include <vector>

int main()
{
    std::vector<double> temps;

    std::cout << "Enter the temperatures please:\n";
    for (double temp; std::cin >> temp; )
    {
        temps.push_back( temp );
    }

    std::cout << "All temperatures:\n";
    for ( double temp : temps )
    {
        std::cout << temp << ' ';
    }
    std::cout << '\n';

    return 0;
}
