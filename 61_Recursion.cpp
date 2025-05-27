#include <iostream>

void walk(int steps);
int factorial(int num);

int main(){

    // Recursion = A programming technique where a function invokes itself from within.
    //             To break a complex concept into a repeatable single step.

    // Advantages    = Less and Cleaner Code. Useful for sorting and searching algorithms.
    // Disadvantages = Uses more memory. Slower.

    // One can use Iterative approach or Recursive approach.

    walk(3);
    // factorial(4);

    std::cout << "Factorial using recursive method is " << factorial(4) << '\n';

    return 0;

}

void walk(int steps){

    // Below is Iterative approach.

    // for(int i=0 ; i < steps ; i++){
    //     std::cout << "You took a step!\n";
    // }

    // --------------------------------------------------------------

    // Below is recursive approach.

    if(steps > 0){
        std::cout << "You took a step!\n";
        walk(steps - 1);
    }

    // --------------------------------------------------------------
}


int factorial(int num){

    // Below is Iterative approach.

    // int result = 1;
    // for(int i=1 ; i <= num ; i++){
    //     result = result * i;
    // }

    // std::cout << "Factorial using iterative method is " << result << '\n';

    // --------------------------------------------------------------

    // Below is recursive approach.

    if(num > 0){
        return num * factorial(num-1);
    }
    else{
        return 1;
    }

    // --------------------------------------------------------------

}