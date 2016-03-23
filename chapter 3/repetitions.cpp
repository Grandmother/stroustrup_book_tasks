#include <iostream>
#include <string>

int main()
{
    std::string previous = " ";

    std::string current;
    while (std::cin >> current)
    {
        if (previous == current)
        {
            std::cout << current << " is repeated.\n";
        }
        previous = current;
    }
    return 0;
}
