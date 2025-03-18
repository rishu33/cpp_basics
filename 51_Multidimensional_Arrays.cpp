#include <iostream>

int main(){

    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                            {"Corvett", "Equinox", "Silverado"},
                            {"Challenger", "Durango", "Ram 1500"}};

    std::cout  << cars[0][0] << '\n';

    return 0;

}
