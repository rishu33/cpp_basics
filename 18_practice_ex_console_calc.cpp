#include <iostream>

int main(){

    // switch = alternative to using many "else if" statements
    // compares one value against matching cases

    double num1;
    double num2;
    double result;
    char op;


    std::cout << "***********CALCULATOR***********\n";
    std::cout << "Enter any one operation from (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "Result = " << result << '\n';
            break;
        case '-':
            result = abs(num1 - num2);
            std::cout << "Result = " << result << '\n';
            break;
        case '*':
            result = num1*num2;
            std::cout << "Result = " << result << '\n';
            break;
        case '/':
            result = num1/num2;
            std::cout << "Result = " << result << '\n';
            break;
        default:
            std::cout << "That wasn't a valid response. \n";
    }
    std::cout << "********************************\n";

    return 0;
}