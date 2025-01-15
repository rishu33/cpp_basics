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

    // Directly using value from a particular namespace.
    using namespace first;
    std::cout << x << '\n';
    
    return 0;
}