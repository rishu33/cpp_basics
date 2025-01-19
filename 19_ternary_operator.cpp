#include <iostream>

int main(){

    // ternary operator = replacement to an if/else statement
    // condition ? expression_if_true : expression_if_false

    int grade;

    std::cout << "Enter your grade in percentage: ";
    std::cin >> grade;

    grade >= 60 ? std::cout << "You Pass! \n" : std::cout << "You Fail! \n";

    return 0;
}