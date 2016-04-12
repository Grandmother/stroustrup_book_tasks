#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

#define IOERR 74

int main()
{
    vector<string> dictionary;
    string censor = "acrobat";

    cout << "Enter some words to dictionary:\n";
    for ( string temp ; cin >> temp; )
    {
        dictionary.push_back(temp);
    }

    sort(dictionary.begin(), dictionary.end());
    cout << "\n\nWords in dictionary:\n";
    for ( int i = 0; i < dictionary.size(); ++i )
    {
        if ( dictionary[i] == censor )
        {
            cout << "BEEP" << '\n';
        }
        else if ( i == 0 || dictionary[i-1] != dictionary[i])
        {
            cout << dictionary[i] << '\n';
        }
    }
    return 0;
}
