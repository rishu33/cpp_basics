#include <iostream>

int main(){

    // do while loop = do some block of code first, then repeat if while condition is true.
    
    int number;

    do{
        std::cout << "Enter a positive integer: ";
        std::cin >> number;
    }while(number < 0);
    
    std::cout << "The number is " << number << '\n';

    return 0;
}