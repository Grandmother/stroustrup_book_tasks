#include <iostream>
#include <numeric>

using namespace std;

int main()
{
    int max;

    cout << "Enter the max number please: ";
    cin >> max;

    vector<int> all(max);
    iota(all.begin(), all.end(), 2);

    for ( int i : all )
    {
        for ( int j = i  )
        {

        }
    }

}
