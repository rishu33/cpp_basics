#include <iostream>

int main(){

    // && = AND = to check if two conditions are both true
    // || = OR = to check if atleast one of two conditions is true
    // ! = reverses the logical state of its operand

    int temp;

    std::cout << "Enter tempareture in degree celsius: ";
    std::cin >> temp;

    if(temp > 20 && temp < 30){
        std::cout << "The temperature is good.\n";
    }
    else{
        std::cout << "The temperature is either too cold or too hot.\n";
    }
    
    if(temp <= -20 || temp >= 50){
        std::cout << "The temperature is unbearable.\n";
    }
    else{
        std::cout << "The temperature is bearable.\n";
    }

    if(temp != 25){
        std::cout << "The temperature is NOT ideal room temperature.\n";
    }
    else{
        std::cout << "The temperature is ideal room temperature.\n";
    }
    return 0;
}