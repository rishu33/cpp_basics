#include <iostream>

// Namespace = provides a solution for preventing name conflicts in large projects.
// Each entity needs a unique name.
// A namespace allows for identically named entities, as long as the namespaces are different.

int main(){

    // Since standard namespace has many entities, there is a possibility of name conflict.
    // So better option is : Using parts of standard namespace.
    using std::cout;
    using std::string;
    
    string x = "Bro";

    cout << "Hello " << x << '\n';
    
    return 0;
}