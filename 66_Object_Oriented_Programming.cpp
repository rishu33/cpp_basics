#include <iostream>

class Human{
    public:
        std::string name = "Unnamed";
        std::string occupation;
        int age;

        void eat(){
            std::cout << "This person is eating.\n";
        }

        void drink(){
            std::cout << "This person is drinking.\n";
        }

        void sleep(){
            std::cout << "This person is sleeping.\n";
        }
};

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        void acclerate(){
            std::cout << "You stepped on the gas!\n";
        }

        void brake(){
            std::cout << "You stepped on the brake!\n";
        }

};


int main(){

    // Object = A collection of attributes and methods.
    //          They can have characteristics and could perform actions.
    //          Can be used to mimic real world items (ex. Phone, Book, etc.).
    //          Created from a class which acts as a "blue-print".

    Human human1;

    human1.name = "Rick";
    human1.occupation = "Scientist";
    human1.age = 51;

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    human1.eat();
    human1.drink();
    human1.sleep();


    // Another example.

    Car car1;

    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2020;
    car1.color = "Silver";

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    car1.acclerate();
    car1.brake();

    return 0;

}