#include <iostream>

int main(){

    // memory addresses = a location in memory where data is stored
    // a memory address can be accessed with & (address-of) operator

    std::string name = "Asteroid Destroyer";
    int age = 2;
    bool is_student = false;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &is_student << '\n';

    // This prints the hexadecimal address. Likely to change every time the program is run.

    return 0;

}
