#include <iostream>

// Namespace = provides a solution for preventing name conflicts in large projects.
// Each entity needs a unique name.
// A namespace allows for identically named entities, as long as the namespaces are different.

int main(){

    // Using standard namespace.
    using namespace std;

    int x = 0;

    cout << x << '\n'; //Notice we don't add std:: here since we are already using it.
    
    return 0;
}