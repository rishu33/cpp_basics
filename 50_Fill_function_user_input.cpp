#include <iostream>

int main(){

    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);

    for(int i = 0; i < size; i++){
        std::cout << "Enter #" << i+1 << " food you like: ";
        std::getline(std::cin, foods[i]);
    }
    
    std::cout << "You like the following foods:\n";

    for(std::string food:foods){
        std::cout << food << ' ';
    }
    std::cout << '\n';

    return 0;

}
