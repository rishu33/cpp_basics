#include <iostream>
#include <cmath>

int main(){

    double a;
    double b;
    double hyp;

    std::cout << "Enter Base length: ";
    std::cin >> a;
    std::cout << "Enter Perpendicular length: ";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);

    hyp = sqrt(a+b);
    std::cout << "The hypotenuse of this Right Triangle is " << hyp << "cm. \n";

    return 0;
}