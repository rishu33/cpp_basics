#include <iostream>
#include <cmath>

int main(){

    double x = 3;
    double y = 4;
    double max, min, power, squrt, abso, rnd_1, rnd_2, rnd_3, cil, flr;

    // Max function
    max = std::max(x, y);
    std::cout << "The greater number between " << x << " and " << y << " is " << max << '\n';

    // Min function
    min = std::min(x, y);
    std::cout << "The smaller number between " << x << " and " << y << " is " << min << '\n';

    // Power function
    power = pow(x, y);
    std::cout << "The value " << x << " to the power " << y << " is " << power << '\n';

    // Square root function
    squrt = sqrt(y);
    std::cout << "The square root of " << y << " is " << squrt << '\n';

    // Absolute function
    abso = abs(-2);
    std::cout << "The absolute value of -2 is " << abso << '\n';

    // Round function
    rnd_1 = round(3.14);
    rnd_2 = round(3.97);
    rnd_3 = round(3.5);
    std::cout << "The rounded value of 3.14 is " << rnd_1 << '\n';
    std::cout << "The rounded value of 3.97 is " << rnd_2 << '\n';
    std::cout << "The rounded value of 3.5 is " << rnd_3 << '\n';

    // Ceil function
    cil = ceil(4.34);
    std::cout << "The Ceil value of 4.34 is " << cil << '\n';

    // Floor function
    flr = floor(4.78);
    std::cout << "The Floor value of 4.78 is " << flr << '\n';

    return 0;
}