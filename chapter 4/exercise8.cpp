#include <iostream>

using namespace std;

int main()
{
    double sum;
    double last_cell;
    int current_cell;

    for ( sum = 1, current_cell = 1, last_cell = 1; sum <= 1000; sum += last_cell*2, last_cell = last_cell*2, ++current_cell ){
        cout << current_cell << ": cell = " << last_cell << " sum = " << sum << '\n';
    }
    cout << current_cell << ": cell = " << last_cell << " sum = " << sum << "\n\n";

    for ( sum = 1, current_cell = 1, last_cell = 1; sum <= 1000000; sum += last_cell*2, last_cell = last_cell*2, ++current_cell ){
        cout << current_cell << ": cell = " << last_cell << " sum = " << sum << "\n";
    }
    cout << current_cell << ": cell = " << last_cell << " sum = " << sum << "\n\n";

    for ( sum = 1, current_cell = 1, last_cell = 1; sum <= 1000000000; sum += last_cell*2, last_cell = last_cell*2, ++current_cell ){
        cout << current_cell << ": cell = " << last_cell << " sum = " << sum << '\n';
    }
    cout << current_cell << ": cell = " << last_cell << " sum = " << sum << "\n\n";

    return 0;
}
