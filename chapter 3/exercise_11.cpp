#include <iostream>

using namespace std;

int main()
{
    int one {0}, five {0}, ten {0}, quarter {0}, half {0}, dollar {0}, total {0};

    cout << "Enter the count of one cent coins: ";
    cin >> one;
    cout << "Enter the count of five cents coins: ";
    cin >> five;
    cout << "Enter the count of ten cents coins: ";
    cin >> ten;
    cout << "Enter the count of quarters: ";
    cin >> quarter;
    cout << "Enter the count of half: ";
    cin >> half;

    cout << "\nSo you has:"
        << "\nOne cent coins: " << one
        << "\nFive cents coins: " << five
        << "\nTen cents coins: " << ten
        << "\nQuarters: " << quarter
        << "\nFifty cents coins: " << half << std::endl;

    total = one + five * 5 + ten * 10 + quarter * 25 + half * 50;
    dollar = total / 100;
    total %= 100;

    cout << "\nIt is equal to: ";
    if ( dollar != 0 )
    {
        if ( dollar == 1 )
        {
            cout << dollar << " dollar";
        }
        else
        {
            cout << dollar << " dollars";
        }
    }
    if ( total != 0 )
    {
        if ( total == 1 )
        {
            cout << " and " << total << " cent.";
        }
        else
        {
            cout << " and " << total << " cents.";
        }
    }
    cout << endl;

    return 0;
}
