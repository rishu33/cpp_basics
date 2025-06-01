#include <iostream>

class Animal{
    public:
        bool alive = true;

        void eat(){
            std::cout << "This animal is eating now!\n";
        }
};

class Dog : public Animal{
    public:
        void bark(){
            std::cout << "The dog goes woof!\n";
        }
};

int main(){

    // Inheritance = A class can receive attributes and methods from another class.
    //               Children class inherit from Parent class.
    //               Helps to use similar code found within multiple classes.

    Dog dog1;

    std::cout << "Is the dog alive? " << dog1.alive << '\n';

    dog1.eat();
    dog1.bark();
    
    return 0;
}