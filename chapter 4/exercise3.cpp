#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Enter the distances please:\n";

    vector<double> distances;

    for ( double temp; cin >> temp; )
    {
        distances.push_back(temp);
    }

    double total = 0;
    for ( double cur : distances )
    {
        total += cur;
    }

    sort( distances.begin(), distances.end() );
    cout << "Minimum distance is: " << distances[0] << '\n'
        << "Maximum distance is: " << distances[distances.size() - 1] << '\n'
        << "Total distance is: " << total << '\n'
        << "Average distance is: " << total/distances.size() << '\n';

    return 0;
}
