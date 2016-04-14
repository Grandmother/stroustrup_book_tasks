#include <iostream>
#include <vector>

using namespace std;

bool is_prime(const vector<int>& primes, int candidate )
{
    bool prime = true;
    for ( int i = 2; i < primes.size(); ++ i )
    {
        if ( candidate % i == 0 )
        {
            prime = false;
            break;
        }
    }
    return prime;
}

int main()
{
    vector<int> primes;
    int max;

    cout << "Enter the maximum number please: ";
    cin >> max;

    for ( int i = 1; i < max; ++i )
    {
        if ( is_prime( primes, i ) == true )
        {
            primes.push_back(i);
        }
    }

    cout << "Prime numbers from 1 to 100:\n";
    for ( int prime : primes )
    {
        cout << prime << ' ';
    }
    cout << '\n';

    return 0;
}
