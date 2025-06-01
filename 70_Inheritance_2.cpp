#include <iostream>

class Shape{
    public:
        double area;
        double volume;
};

class Cube : public Shape{
    public:
        double side;

    Cube(double side){
        this->side = side;
        this->area = side * side * 6;
        this->volume = side * side * side;
    }
};

class Sphere : public Shape{
    public:
        double radius;

    Sphere(double radius){
        this->radius = radius;
        this->area = 4 * 3.14159 * (radius * radius);
        this->volume = (4/3.0) * 3.14159 * (radius * radius * radius);
    }
};

int main(){

    // Inheritance = A class can receive attributes and methods from another class.
    //               Children class inherit from Parent class.
    //               Helps to use similar code found within multiple classes.

    Cube cube1(10);

    std::cout << "Cube Area : " << cube1.area << '\n';
    std::cout << "Cube Volume : " << cube1.volume << '\n';
    
    Sphere sphere1(10);

    std::cout << "Sphere Area : " << sphere1.area << '\n';
    std::cout << "Sphere Volume : " << sphere1.volume << '\n';

    return 0;
}