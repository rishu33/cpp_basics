#include <iostream>

int main(){
    
    std::string students[] = {"Spongebob", "Patrick", "Squidward"};

    // If you want to print the student names, one way is
    
    std::cout << students[0] << '\n';
    std::cout << students[1] << '\n';
    std::cout << students[2] << '\n';

    // Another way is to iterate over the array

    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
        std::cout << students[i] << '\n';
    }

    // Another Example

    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};

    for(int i = 0; i < sizeof(grades)/sizeof(char); i++){
        std::cout << grades[i] << '\n';
    }

    return 0;

}