#include <iostream>

int main(){

    int students = 100;
    students++;    // OR students = students + 1  OR students += 1;
    std::cout << students << '\n';

    students--;    // OR students = students - 1  OR students -= 1;
    std::cout << students << '\n';

    students*=2;    // OR students = students * 2
    std::cout << students << '\n';

    students/=10;    // OR students = students / 10
    std::cout << students << '\n';

    // What happens if we go into decimal with int values?
    students/=3;    // OR students = students / 3
    std::cout << students << '\n';    // Notice we just get the part before decimal. Rest is truncated.

    // Remainder operator
    int remainder = students % 4;
    std::cout << remainder << '\n';

    // Order of precedence = Parenthesis > Multiplication and Division > Addition and Subtraction
    int sum_1 = 6 - 5 + 4 * 3 / 2;
    std::cout << sum_1 << '\n';
    
    // Note: We can override the operator precedence by using parenthesis.
    int sum_2 = 6 - (5 + 4) * 3 / 2;
    std::cout << sum_2 << '\n';

    return 0;
}