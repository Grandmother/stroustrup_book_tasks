#include <iostream>
#include <string>

int main()
{
    constexpr double rub_usd = 67.77;
    constexpr double rub_gbp = 97.23;
    constexpr double rub_eur = 76.86;

    constexpr double uah_usd = 30.15;
    constexpr double uah_gbp = 37.59;
    constexpr double uah_eur = 29.69;

    constexpr double cny_usd = 6.46;
    constexpr double cny_gbp = 9.27;
    constexpr double cny_eur = 7.33;

    double count = 0;
    char currency= 'a';

    std::cout << "Enter the money's count and the currency(r/u/c): ";
    std::cin >> count >> currency;
    switch ( currency )
    {
        case 'r':
            std::cout << count << "rub == " << count / rub_usd << "usd\n";
            std::cout << count << "rub == " << count / rub_gbp << "gbp\n";
            std::cout << count << "rub == " << count / rub_eur << "eur\n";
            break;
        case 'u':
            std::cout << count << "uah == " << count / rub_usd << "usd\n";
            std::cout << count << "uah == " << count / rub_gbp << "gbp\n";
            std::cout << count << "uah == " << count / rub_eur << "eur\n";
            break;
        case 'c':
            std::cout << count << "cny == " << count / cny_usd << "usd\n";
            std::cout << count << "cny == " << count / cny_gbp << "gbp\n";
            std::cout << count << "cny == " << count / cny_eur << "eur\n";
            break;
        default:
            std::cout << "I don't know this currency(" << currency << ").\n";
            break;
    }

    return 0;
}
