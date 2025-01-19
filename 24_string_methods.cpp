#include <iostream>

int main(){

    std::string name;

    std::cout << "Enter your full name: ";
    std::getline(std::cin, name);

    // Empty function

    if(name.empty()){
       std::cout << "You didn't enter your name!"; 
    }
    else{
        std::cout << "Hello " << name << '\n';
    }

    // Clear function

    name.clear();
    std::cout << "Hello " << name << '\n';

    // Append function
    std::string username;
    std::cout << "Enter username: ";
    std::cin >> username;

    username.append("@gmail.com");
    std::cout << "Your email id is now " << username << '\n';

    // Get character at a certain position from a string
    std::cout << username.at(0) << '\n';

    // Insert a character in a string at a given position
    username.insert(0, "bot_");
    std::cout << username << '\n';

    // Find a certain character from a string. Gives the index of first matching character.
    int len = username.find('@');
    std::cout << "Your username is now " << len << " characters long.\n";

    // Erase function: Erase a part of string
    username.erase(0, 4);
    std::cout << username << '\n';

    return 0;
}