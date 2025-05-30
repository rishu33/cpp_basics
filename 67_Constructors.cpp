#include <iostream>

class Student{

    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;

        // In case we write Student(std::string a, int b, double c). then we directly write
        // name = a;
        // age = b;
        // gpa = c;
    }

};

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

    Car(std::string make, std::string model, int year, std::string color){
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;

    }
};

int main(){

    // Constructors = A special method within a class that is automatically called when an object
    //                is instantiated. It is useful for assigning values to attributes as arguments.

    Student student1("Spongebob", 21, 2.1);

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';

    Student student2("Patrick", 25, 3.0);

    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    std::cout << student2.gpa << '\n';
    
    Car car1("Chevy", "Corvette", 2022, "blue");

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    return 0;
}