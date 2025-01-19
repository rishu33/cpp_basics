#include <iostream>

int main(){

    // ternary operator = replacement to an if/else statement
    // condition ? expression_if_true : expression_if_false

    bool hungry = true;

    hungry ? std::cout << "You are Hungry! \n" : std::cout << "You are Full! \n";

    // OR std::cout << (hungry ? "You are Hungry! \n" : "You are Full! \n")
    
    return 0;
}