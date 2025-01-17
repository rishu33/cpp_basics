#include <iostream>
#include <cmath>

int main(){

    double x = 3;
    double y = 4;
    double max, min, power;

    // Max function
    max = std::max(x, y);
    std::cout << "The greater number between " << x << " and " << y << " is " << max << '\n';

    // Min function
    min = std::min(x, y);
    std::cout << "The smaller number between " << x << " and " << y << " is " << min << '\n';

    // Power function
    power = pow(x, y);
    std::cout << "The value " << x << " to the power " << y << " is " << power << '\n';


    return 0;
}