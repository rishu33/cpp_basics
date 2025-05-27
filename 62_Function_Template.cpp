#include <iostream>

int max(int x, int y){
    return (x > y) ? x : y ;
}

double max(double x, double y){
    return (x > y) ? x : y ;
}

char max(char x, char y){
    return (x > y) ? x : y ;
}

// Now we combine above 3 functions so that it accepts any datatype and we don't need to write 3 separate functions

// template <typename T>  // This works when both inputs are of same datatype.
template <typename T, typename U>  // This works when both inputs are of different datatype.

T maximum(T x, U y){    // Can also set return type (instead of T) to eithe U or auto (AUTOMATIC) or anything else.
    return (x > y) ? x : y ;
}

// This will work with multiple datatypes.

int main(){

    // Function Template = describes what a funciton looks like.
    //                     Can be used to generate as many overloaded functions as needed,
    //                     each using different data type.
    
    std::cout << max(1,2) << '\n';

    std::cout << max(1.1,2.1) << '\n';

    std::cout << max('1','2') << '\n';

    std::cout << maximum('1',2) << '\n';
    std::cout << maximum(1,'2') << '\n';
    
    return 0;

}