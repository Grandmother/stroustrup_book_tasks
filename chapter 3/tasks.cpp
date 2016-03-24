#include <iostream>

inline void simple_error(std::string s)
{
    std::cerr << "error: " << s << '\n';
    std::cin.get();
    exit(1);
}

int main()
{
    std::string username, addressee, frnd;
    char frnd_sex {' '};
    int addr_age = 0;

    std::cout << "Enter your name please: ";
    std::cin >> username;
    std::cout << "Enter the name of addressee and his age please: ";
    std::cin >> addressee >> addr_age;

    if ( addr_age < 0 || addr_age > 110 )
    {
        simple_error("Are you kidding me?\nYes, you kidding me!!\nBye!");
    }

    std::cout << "Enter your friend name and sex: ";
    std::cin >> frnd >> frnd_sex;

    std::cout << "\nHello, dear " << addressee << "!\n"
        << "\nNice to write you again.\n";
    if (frnd_sex == 'm')
    {
        std::cout << "Today I have met our old friend, " << frnd << ". He was create a new electrocar in his workshop whith his new friends.\n"
            << "I can ask him to call you when we meet again.\n";
    }
    else
    {
        std::cout << "Today I have met our old friend, " << frnd << ". She was create a new electrocar in her workshop whith her new friends.\n"
            << "I can ask her to call you when we meet again.\n";
    }
    std::cout << "I heard you have selebrated your birthday and now you are " << addr_age << " years old.";
    if ( addr_age == 17 )
    {
        std::cout << " So you can participate in polls next year!!\n";
    }
    else if ( addr_age < 12 )
    {
        std::cout << " And you would be " << addr_age+1 << " years old next year.";
    }
    else if ( addr_age > 70 )
    {
        std::cout << " I hope you wouldn't bored on pension.";
    }

    std::cout << "\n\nBest Regards\n"
        << "____________________\n"
        << "____________________\n"
        << username << '\n';

    return 0;
}
