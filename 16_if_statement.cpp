#include <iostream>

int main(){

    // if statement = do something if a condition is true, something else if condition is false.

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 2){
        std::cout << "Leave programming, how about a career in drinking water? \n";
    }
    else if(age > 0){
        std::cout << "You're too late to learn programming. \n";
    }
    else{
        std::cout << "You're right on time. Ready to build your first LLM model? \n";
    }

    return 0;
}