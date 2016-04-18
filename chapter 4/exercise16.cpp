#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> numbers;
    int repetitions = 0;
    int max_repetitions = 0;
    int popular = 0;
    int number;

    cout << "Enter the numbers please\n";
    while ( cin >> number )
    {
        numbers.push_back(number);
    }

    sort(numbers.begin(), numbers.end());
    number = numbers[0];
    for ( int current : numbers )
    {
        if ( current == number )
        {
            ++repetitions;
        }
        else
        {
            number = current;
            if ( repetitions > max_repetitions )
            {
                max_repetitions = repetitions;
                popular = number;
            }
            repetitions = 0;
        }
    }

    cout << "\nThe most popular number is " << popular << " with " << max_repetitions << " repetitions\n";
    return 0;
}
