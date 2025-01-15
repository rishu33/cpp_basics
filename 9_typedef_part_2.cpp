#include <iostream>
#include <vector>

// typedef is now a days largely replaced by "using" keyword

using pairlist_t = std::vector<std::pair<std::string, int>>;
using text_t = std::string;
using number_t = int;

int main(){

    pairlist_t pairlist;
    std::string firstname = "Rishu";
    text_t lastname = "Sharma";
    number_t age = 100;

    std::cout << firstname << " " << lastname << '\n';
    std::cout << "I am " << age << " years old.";

    return 0;
}