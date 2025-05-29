#include <iostream>

struct car{
    std::string model;
    int year;
    std::string color;
};

void print_car(car car); // replace to print_car(car &car) to work with original Struct.

void paint_car(car &car, std::string color); // It is important to work with address because
// we are changing the Struct values. So that original value is changed, and not the copy.

int main(){

    // Struct = A structure that groups related variables under one name.
    //          A Struct can contain many different data types (string, int, double, bool, etc.)
    //          Variables in a Struct are called Members.
    //          Members can be accessed with - "Class Member Access Operator"
    
    car car1, car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "Red";

    car2.model = "Viper";
    car2.year = 2019;
    car2.color = "Black";

    // When we pass a Struct as an argument, we are actually passing a copy of the original Struct.
    // Proof : check the before address and after address.
    std::cout << "Before address: " << &car1 << '\n';
    print_car(car1);

    paint_car(car1, "Metallic Grey");

    print_car(car1);

    return 0;

}

void print_car(car car){  // replace to print_car(car &car) to work with original Struct.

    std::cout << "After address: " << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';

}

void paint_car(car &car, std::string color){
    car.color = color;
}