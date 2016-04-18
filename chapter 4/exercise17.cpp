#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    vector<string> strings;
    int repetitions = 0;
    int max_repetitions = 0;
    string popular;
    string str;

    cout << "Enter the strings please\n";
    while ( cin >> str )
    {
        strings.push_back(str);
    }

    sort(strings.begin(), strings.end());
    str = strings[0];
    for ( string current : strings )
    {
        if ( current == str )
        {
            ++repetitions;
        }
        else
        {
            if ( repetitions > max_repetitions )
            {
                max_repetitions = repetitions;
                popular = str;
            }
            str = current;
            repetitions = 0;
        }
    }

    cout << "\nThe maximum string is: " << strings[strings.size() - 1] << '\n';
    cout << "\nThe minimum string is: " << strings[0] << '\n';
    cout << "\nThe most popular string is " << popular << " with " << max_repetitions << " repetitions\n";
    return 0;
}
