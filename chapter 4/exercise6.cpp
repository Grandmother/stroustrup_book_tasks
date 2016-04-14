#include <iostream>
#include <vector>
#include <string>

using namespace std;

const vector<string> digits {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int is_digits ( const string& number )
{

    int result = 0;
    int count = 0;
    for ( char digit : number )
    {
        ++count;
        // is it a digits?
        if ( digit < '0' || digit > '9' )
        {
            // if this is a first symbol and it is not a digit
            if ( count == 1 )
            {
                break;
            }
            // if we find a letter among the numerals.
            else
            {
                throw 1;
            }
        }

    }
    // if we go throw all word and all symbols in it is digits.
    if ( count == number.size() ) return 1;
    else return 0;
}

int main()
{
    string number;
    cout << "Enter the numbers please: ";

    while ( cin >> number)
    {
        try
        {
            if ( is_digits( number ) )
            {
                int num_size = number.size();
                for ( int i = 0; i < num_size; ++i )
                {
                    int digit = number[i] - '0';
                    cout << digits[digit] << ' ';
                }
                cout << '\n';
            }
            else
            {
                for ( int i = 0; i < digits.size(); ++i )
                {
                    if ( number == digits[i] )
                    {
                        cout << i << '\n';
                    }
                }
            }
        }
        catch( const int& i)
        {
            cout << "Entered number is wrong\n";
        }
        cout << "\nAnd try to write another word:\n";
    }
}
