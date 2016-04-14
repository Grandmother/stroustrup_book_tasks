#include <iostream>
#include <limits>

using namespace std;

void solve(double max)
{
    double sum;
    double last_cell;
    int current_cell;

    for ( sum = 1, current_cell = 1, last_cell = 1; sum <= max; sum += last_cell*2, last_cell = last_cell*2, ++current_cell ){
        cout << current_cell << ": cell = " << last_cell << " sum = " << sum << '\n';
    }
    cout << current_cell << ": cell = " << last_cell << " sum = " << sum << "\n\n";
}

int main()
{
    solve( 1000 );
    solve( 1000000 );
    solve( 1000000000 );
    solve( numeric_limits<int>::max() );
    solve( numeric_limits<double>::max() );
    return 0;
}
