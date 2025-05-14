#include <iostream>

int main(){

    // Null Value = a special value that means something has no value.
    //              When a pointer is holding a null value,
    //              That pointer is not pointing to anything, hence the name Null Pointer.

    // nullptr = keyword represents a null pointer literal
    // Null pointers are helpful in determining if an address was successfully assigned to a pointer.

    // & address-of operator
    // * dereference operator

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    // If we dereference a null pointer, it gives some wierd behaviour.
    // If we dereference a pointer that is not assigned anything, similar wierd behaviour.

    // So we usually check if the pointer is a nullptr before dereferencing it.

    if(pointer == nullptr){
        std::cout << "Address was not assigned.\n";
    }
    else{
        std::cout << "Address was assigned.\n";
        // Dereferencing
        std::cout << *pointer << '\n';
    }
   
    return 0;

}