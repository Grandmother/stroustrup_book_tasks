#include <iostream>
#include <vector>
#include <string>

using namespace std;

const vector<string> digits {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int is_digits(const string& number);
int get_number(const string& number);

int main()
{
    char operation = ' ';
    string left;
    string right;
    double result = 0;

    cout << "This is the best calculator in the world. Almost...\nAnyway try it yourself..\n";

    while ( cin >> left >> operation >> right )
    {
        switch ( operation )
        {
            case '+':
                result = get_number(left) + get_number(right);
                break;
            case '-':
                result = get_number(left) - get_number(right);
                break;
            case '*':
                result = get_number(left) * get_number(right);
                break;
            case '/':
                result = get_number(left) / get_number(right);
                break;
            default:
                cout << "Did you really need this operation?\nTry to solve it yourself..\n";
                continue;
        }
        cout << left << ' ' << operation << ' ' << right << " = " << result << '\n';
        cout << "You can solve any problem with this calculator.\n";
    }

    return 0;
}

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

int get_number(const string& number)
{
    int res = 0;
    try
    {
        int ten_pow = 1;
        if ( is_digits( number ) )
        {
            int num_size = number.size();
            for ( int i = 0; i < num_size; ++i )
            {
                int digit = number[i] - '0';
                res = res * ten_pow + digit;
                ten_pow *= 10;
            }
            return res;
        }
        else
        {
            for ( int i = 0; i < digits.size(); ++i )
            {
                if ( number == digits[i] )
                {
                    return i;
                }
            }
        }
    }
    catch( const int& i)
    {
        cout << "Number \"" << number << "\" is not recognized. Let it be zero..\n";
        return 0;
    }
}
