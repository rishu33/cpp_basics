#include <iostream>

int main(){

    for(int i = 10 ; i >= 1 ; i--){
        
        for(int j = i ; j >= 1 ; j--){
        std::cout << j << " ";
        }
        
        std::cout << '\n';
    }
    
    std::cout << "HAPPY NEW YEAR!\n";
    
    return 0;
}