#include <iostream>

using namespace std;

int random(int number)
{
    int result;
    if ( number > 10 )
    {
        result = number * (number % 100);
        return result;
    }

    return 4;
}

int main()
{
    enum variant {STONE=0, SCISSORS, PAPER};

    int turn = 31;
    cout << "Press any key to start.\n";
    cout << "Turn: " << turn << "\n";
    while ( cin.get() )
    {
        // Let random number always has three digits.
        turn = random(turn)%1000;
        cout << "Turn: " << turn << "\n";
        switch (turn % 3)
        {
            case STONE:
                cout << "STONE\n";
                break;
            case SCISSORS:
                cout << "SCISSORS\n";
                break;
            case PAPER:
                cout << "PAPER\n";
                break;
        }
        cout << "And try again!!!\n";
    }

}
