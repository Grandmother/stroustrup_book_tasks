#include <iostream>

using namespace std;

int main ()
{
    int min = 0;
    int max = 100;
    char answer = 'n';

    while ( max - min > 2 )
    {
        cout << "Is number less than " << min + (max - min)/3 << " ?(y/n): ";
        cin >> answer;

        // less
        if (answer == 'y')
        {
            max = min + (max - min)/3;
        }
        else
        {
            min += (max - min)/3;
        }
    }
    cout << "Is your number " << min << "?\n";
    cin >> answer;
    if ( answer != 'y' )
    {
        cout << "Your number is " << max-1 << '\n';
    }

    cout << "Have a good day. Bye!\n";

    return 0;
}
