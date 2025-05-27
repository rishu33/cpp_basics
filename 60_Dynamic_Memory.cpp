#include <iostream>

int main(){

    // Dynamic Memory = Memory that is allocated after the program is compiled and already running.
    //                  Use the 'new' operator to allocate memory in the heap rather than the stack.

    // Useful when we don't know how much memory we will need.
    // Makes our programs more flexible, especially when accepting user input.

    int *pNum = NULL;
    pNum = new int;

    *pNum = 21;

    std::cout << "Address: " << pNum << '\n';
    std::cout << "Value: " << *pNum << '\n';

    delete pNum; // to delete the pointer in heap when no longer using that memory space
    
    // Another Example

    char *pGrades = NULL;
    int size;

    std::cout << "How many grades to enter in?: ";
    std::cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        std::cout << "Enter grade number " << i+1 << ": ";
        std::cin >> pGrades[i];
    }

    std::cout << "The grades entered are:\n";
    for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << ' ';
    }

    std::cout << '\n';

    // If we want to delete an array

    delete[] pGrades;

    return 0;

}