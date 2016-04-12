#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

#define IOERR 74

int main()
{
    vector<string> dictionary;
    vector<string> censor {"acrobat", "reader"};

    cout << "Enter some words to dictionary:\n";
    for ( string temp ; cin >> temp; )
    {
        dictionary.push_back(temp);
    }

    sort(dictionary.begin(), dictionary.end());

    string word;

    cout << "\n\nWords in dictionary:\n";
    for ( int i = 0; i < dictionary.size(); ++i )
    {
        word = dictionary[i];
        for ( int j = 0; j < censor.size(); ++j )
        {
            if ( word == censor[j] )
            {
                word = "BEEP";
                break;
            }
        }
        if ( i == 0 || dictionary[i-1] != dictionary[i])
        {
            cout << word << '\n';
        }
    }
    return 0;
}
