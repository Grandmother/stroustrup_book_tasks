#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<double> temps;
    std::cout << "Enter the temperatures please:\n";
    for (double temp; std::cin >> temp; )
    {
        temps.push_back(temp);
    }

    std::cout << "Temperatures:\n";
    for ( double temp : temps )
    {
        std::cout << temp << ' ';
    }
    std::cout << '\n';

    double sum = 0;
    for ( double temp : temps )
    {
        sum += temp;
    }
    std::cout << "Average temperature: " << sum / temps.size() << '\n';

    std::sort( temps.begin(), temps.end() );
    int temps_count = temps.size();
    if ( temps_count % 2 == 1 )
    {
        std::cout << "Median temperature: " << temps[ (temps_count-1)/2 ] << '\n';
    }
    else
    {
        double low_median = temps [ (temps_count/2) - 1 ];
        double high_median = temps [ (temps_count/2) ];
        std::cout << "Median temperature: " << (low_median + high_median) / 2 << '\n';
    }

    return 0;
}
