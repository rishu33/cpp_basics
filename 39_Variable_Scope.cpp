#include <iostream>

void print_num();
void print_num_global();
void print_num(int a);

int a = 0;

int main(){

    // Local Variables: declared inside a function or a block {}
    // Global Variables: declared outside of all functions

    int a = 1;

    print_num();
    print_num_global();
    print_num(a);

    return 0;
}

void print_num(){
    // Functions cannot read variables inside other functions as that is a different scope {}
    int a = 2;  // Hence declaring here again
    std::cout << "Number is " << a << '\n';
}

void print_num_global(){
    // Functions can read the variables that are declared outside all functions.
    // As there is NO local declaration here, this function will read directly the Globally declared variable.
    std::cout << "Number is " << a << '\n';
}

void print_num(int a){
    // A Function will use any local variables first before searching for any global variables
    std::cout << "Number is " << a << '\n';

    // But if you want to forcefully use the Global variable, when local variables is already present
    // Use the SCOPE RESOLUTION operator ::
    std::cout << "Number is " << ::a << '\n';
}