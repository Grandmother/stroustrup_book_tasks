#include <iostream>
#include <cmath>

int main()
{
    std::string operation;
    double operand1, operand2;
    double result = std::nan("1");
    bool exit = false;

    std::cout << "Enter the operation and it's two operands please: ";
    while ( std::cin >> operation >> operand1 >> operand2 )
    {
        if ( operation == "+" || operation == "plus" )
        {
            result = operand1 + operand2;
        }
        else if ( operation == "-" || operation == "minus" )
        {
            result = operand1 - operand2;
        }
        else if ( operation == "*" || operation == "mul" )
        {
            result = operand1 * operand2;
        }
        else if ( operation == "/" || operation == "div" )
        {
            result = operand1 / operand2;
        }
        else
        {
            result = std::nan("1");
        }

        if ( std::isnan(result) )
        {
            std::cout << "Error has occured. Try again.\n";
        }
        else
        {
            std::cout << operand1 << " " << operation << " " << operand2 << " = " << result << ";\n";
        }
        std::cout << "Enter the operation and it's two operands please: ";
    }
    std::cout << std::endl;
}
