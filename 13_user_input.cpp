#include <iostream>

// cout << (Insertion operator)
// cin >> (Extraction operator)

int main(){

    std::string name;
    int age;

    std::cout << "What is your name?" << '\n';
    std::cin >> name;

    std::cout << "What is your age?" << '\n';
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old." << '\n';
    std::cout << "Wow, you're ancient." << '\n';

    // Clear the newline character left in the input buffer
    std::cin.ignore();    // OR std::getline(std::cin >> std::ws, feedback);

    // If you want to get string input with spaces.
    std::string feedback;
    std::cout << "Would you like to give any feedback to this awesome program?" << '\n';
    std::getline(std::cin, feedback);
    std::cout << "Thankyou for your following feedback." << '\n' << feedback << '\n';

    return 0;
}