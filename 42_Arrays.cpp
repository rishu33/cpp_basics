#include <iostream>

int main(){
    
    // Arrays = A data structure that can hold multiple values.
    //          Values are accessed by index number.
    //          Kind of like a variable that holds up multiple values.

    std::string car = "Spyder";
    std::cout << car << '\n';

    // Now declaring an Array
    // Here, the variable car is now an array and can hold multiple values.
    // Separate each value with a comma
    std::string cars[] = {"Spyder", "Camaro", "Aventador"};

    std::cout << cars << '\n';
    // This will display the memory address of the variable car.

    // If we want to display the entries of the array, we do this.
    std::cout << cars[0] << ' ';
    std::cout << cars[1] << ' ';
    std::cout << cars[2] << '\n';
    
    cars[0] = "918_Spyder";
    
    std::cout << cars[0] << ' ';
    std::cout << cars[1] << ' ';
    std::cout << cars[2] << '\n';
    
    // NOTE: Arrays should contain all values of same data type.

    // If you want to declare the array and then later on add values to it.
    std::string fruits[3];

    fruits[0] = "Apple";
    fruits[1] = "Banana";
    fruits[2] = "Kiwi";

    std::cout << fruits[0] << ' ';
    std::cout << fruits[1] << ' ';
    std::cout << fruits[2] << '\n';

    //Or an another data type

    double prices[3];

    prices[0] = 45.78;
    prices[1] = 7.50;
    prices[2] = 9.99;

    std::cout << prices[0] << ' ';
    std::cout << prices[1] << ' ';
    std::cout << prices[2] << '\n';

    return 0;

}