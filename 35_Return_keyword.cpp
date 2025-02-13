#include <iostream>

double square(double length); //Declaration of function
double cube(double length);

int main(){

    // return = return a value back to the spot where you called the encompassing function

    double length;
    double area;
    double vol;

    std::cout << "Enter side length: ";
    std::cin >> length;

    area = square(length);

    std::cout << "Area of Square of side-length " << length << " is: " << area << '\n';
    
    vol = cube(length);

    std::cout << "Volume of Cube of side-length " << length << " is: " << vol << '\n';

    return 0;
}

double square(double length){
    // or just directly define the whole function before the main function. Usually people avoid that as it reduces readability.
    
    double result = length * length;
    
    return result;
}

double cube(double length){
    // or just directly define the whole function before the main function. Usually people avoid that as it reduces readability.
    
    double result = length * length * length;
    
    return result;
}