#include <iostream>

// Namespace = provides a solution for preventing name conflicts in large projects.
// Each entity needs a unique name.
// A namespace allows for identically named entities, as long as the namespaces are different.

namespace first{

    int x = 1;

}

namespace second{

    int x = 2;

}

int main(){

    int x = 0;

    std::cout << x << '\n';
    std::cout << first::x << '\n';
    std::cout << second::x << '\n';

    // In order to directly use value from a particular namespace, do this instead of above 4 lines.
    // using namespace first
    // std::cout << x << '\n';
    
    return 0;
}