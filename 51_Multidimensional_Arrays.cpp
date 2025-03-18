#include <iostream>

int main(){

    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                            {"Corvett", "Equinox", "Silverado"},
                            {"Challenger", "Durango", "Ram 1500"}};

    std::cout  << cars[0][0] << "  ";
    std::cout  << cars[0][1] << "  ";
    std::cout  << cars[0][2] << '\n';

    std::cout  << cars[1][0] << "  ";
    std::cout  << cars[1][1] << "  ";
    std::cout  << cars[1][2] << '\n';

    std::cout  << cars[2][0] << "  ";
    std::cout  << cars[2][1] << "  ";
    std::cout  << cars[2][2] << '\n';

    // Another way to do this

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i; i < rows; i++){
        std::cout << cars[i] << '\n';
    } // this loop will show the memory addresses of all 3 rows in the array cars.

    // To display each elements we do loop inside loop

    for(int i=0; i < rows; i++){
        for(int j=0; j < columns; j++){
            std::cout << cars[i][j] << ' ';
        }
        std::cout << '\n';
    }

    return 0;

}
