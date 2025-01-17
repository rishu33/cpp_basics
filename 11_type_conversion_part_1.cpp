#include <iostream>

// type conversion : conversion of value from one datatype to another
// 1. Implicit conversion = automatic
// 2. Explicit conversion = Precede value with new data type (int)

int main(){

    // Implicit
    
    int x = 3.14;
    std::cout << x << '\n';

    char c = 100;
    std::cout << c << '\n';
    
    // Explicit

    double y = 2.99;
    std::cout << (int) y << '\n';

    int n = 100;
    std::cout << (char) n << '\n';

    return 0;
}