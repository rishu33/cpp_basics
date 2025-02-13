#include <iostream>
#include <ctime>

int main(){

    // pseudo random numbers = NOT truly random (but close)

    srand(time(NULL));

    int num = rand();
    std::cout << "Random number is : " << num << "\n";

    num = (rand() % 6) + 1;
    std::cout << "A Random number from a die is : " << num << "\n";

    num = (rand() % 20) + 1;
    std::cout << "A Random number between 1 and 20 is : " << num << "\n";

    // Similarly we can simulate rolling of multiple dices
    
    return 0;
}