#include <iostream>

int main(){

    // ternary operator = replacement to an if/else statement
    // condition ? expression_if_true : expression_if_false

    int number;

    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    number % 2 == 0 ? std::cout << "The number is EVEN! \n" : std::cout << "The number is ODD! \n";

    return 0;
}