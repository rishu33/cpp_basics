#include <iostream>

void happyBirthday(std::string name, int age); //Declaration of function

int main(){

    // function = a block of reusable code

    std::string name;
    int age;

    std::cout << "Enter your Name: ";
    std::cin >> name;

    std::cout << "Enter your Age: ";
    std::cin >> age;

    happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string name, int age){
    // or just directly define the whole function before the main function. Usually people avoid that as it reduces readability.

    std::cout << "\nHappy Birthday to you!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday dear " << name << "!\n";
    std::cout << "Happy Birthday to you!\n";

    std::cout << "You are " << age << " years old! That's very old.\n";
}
