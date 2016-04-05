#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> str_vec = {"Roman", "Dima", "Sasha"};
    std::vector<int> int_vec = {1, 2, 3, 4};

    for ( int i = 0; i < str_vec.size(); ++i )
    {
        std::cout << str_vec[i] << " ";
    }
    std::cout << '\n';

    for ( int elem : int_vec )
    {
        std::cout << elem << ' ';
    }
    std::cout << '\n';

    return 0;
}
