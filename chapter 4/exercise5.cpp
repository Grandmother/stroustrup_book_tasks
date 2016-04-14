#include <iostream>

using namespace std;

int main()
{
    char operation = ' ';
    double left = 0;
    double right = 0;
    double result = 0;

    cout << "This is the best calculator in the world. Almost...\nAnyway try it yourself..\n";

    while ( cin >> left >> operation >> right )
    {
        switch ( operation )
        {
            case '+':
                result = left + right;
                break;
            case '-':
                result = left - right;
                break;
            case '*':
                result = left * right;
                break;
            case '/':
                result = left / right;
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
