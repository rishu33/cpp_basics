#include <iostream>
#include <vector>

// typedef = is a reserved keyword used to create additional name (alias) for another data type.
// In other words, it helps give new identifier to existing complicated datatypes.
// Helps with readability and reduces typos

typedef std::vector<std::pair<std::string, int>> pairlist_t; // End name with "_t" for type
typedef std::string text_t;
typedef int number_t;

int main(){

    pairlist_t pairlist;
    std::string firstname = "Rishu";
    text_t lastname = "Sharma";
    number_t age = 100;

    std::cout << firstname << " " << lastname << '\n';
    std::cout << "I am " << age << " years old.";

    return 0;
}