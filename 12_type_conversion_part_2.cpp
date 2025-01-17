#include <iostream>

// type conversion : conversion of value from one datatype to another
// 1. Implicit conversion = automatic
// 2. Explicit conversion = Precede value with new data type (int)

int main(){

    // Implicit
    
    int questions = 10;
    int correct = 8;

    double score_1 = correct/questions * 100;
    std::cout << score_1 << "%" << '\n';
    // Notice that the integer division just takes the part before decimal.
    // So, from 0.8 it only takes 0 and computes further.
    
    // Explicit

    double score_2 = correct/(double)questions * 100;
    std::cout << score_2 << "%" << '\n';

    return 0;
}