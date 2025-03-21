#include <iostream>

void swap_by_value(std::string x, std::string y);
void swap_by_reference(std::string &x, std::string &y);

int main(){

    // Here we will swap two variables while understanding both the concepts.

    // Pass by value
    std::string x = "Kool-Aid";
    std::string y = "Water";
    
    swap_by_value(x,y);
    
    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';

    // Notice the values of x and y remain intact, since we are passing the values.
    // And inside the function we are making a duplicate of "passed values" and then swapping the copied values.

    // Pass by Reference (Here we pass the memory address of the original variable directly)

    swap_by_reference(x,y);

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';

    // Notice the values are swapped now since inside the function, we took the addresses of input values.
    

    return 0;

}

void swap_by_value(std::string x, std::string y){
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}

void swap_by_reference(std::string &x, std::string &y){
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}
