#include <iostream>

int main(){

    // break : break out of a loop
    // continue : skip current iteration
    
    int number;

    for(int i=1 ; i <= 20 ; i+=1){
        if(i==13){
            continue;
        }
        if(i==17){
            break;
        }
        std::cout << i << '\n';
    }

    return 0;
}