#include <iostream>
#include <string>

int main()
{
    int number_of_words = 0;
    std::string previous = " ";
    std::string current;

    while (std::cin >> current)
    {
        ++number_of_words;
        if (previous == current)
        {
            std::cout << number_of_words << " word (" << current << ") is repeated.\n";
        }
        previous = current;
    }
    return 0;
}
