#include <iostream>

int main(){

    // Pointer = A variable that stores the memory address of another variable.

    // Sometimes it is easier to work with addresses. Then we use pointers.

    // & address-of operator
    // * dereference operator

    std::string name = "Asteroid";

    // Let's initialize a pointer with the address of the name variable.
    std::string *pName = &name;

    //Displaying the pointer.
    std::cout << pName << '\n';
    std::cout << *pName << '\n';
    
    // Another Example
    int age = 500;
    int *pAge = &age;

    std::cout << pAge << '\n';
    std::cout << *pAge << '\n';
   
    return 0;

}