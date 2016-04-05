#include <iostream>
#include <string>

int main()
{
    constexpr double rub_usd = 100.05;
    constexpr double uah_usd = 30.15;
    constexpr double cny_usd = 10;

    double count = 0;
    std::string currency = "";

    std::cout << "Enter the money's count and the currency(rub/uah/cny): ";
    std::cin >> count >> currency;
    if (currency == "rub" || currency == "RUB")
    {
        std::cout << count << "rub == " << count / rub_usd << "usd\n";
    }
    else if ( currency == "uah" || currency == "UAH" )
    {
        std::cout << count << "uah == " << count / rub_usd << "usd\n";
    }
    else if ( currency == "cny" || currency == "CNY" )
    {
        std::cout << count << "cny == " << count / cny_usd << "usd\n";
    }
    else
    {
        std::cout << "I don't know this currency(" << currency << ").\n";
    }

    return 0;
}
