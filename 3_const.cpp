#include <iostream>

int main(){

    // The const keyword specifies that a variable's value is constant.
    // It tells the compiler to prevent anything from modifying it.
    // Read-Only

    const double PI = 3.14159;
    double radius = 10;  // say in cm

    double circumference = 2 * PI * radius;

    std::cout << "Circumference of circle with radius " << radius << "cm is "<< circumference << " cm" << '\n';
    
    // Other constant values could be
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    
    return 0;
}