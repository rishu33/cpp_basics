#include <iostream>
#include <ctime>

int main(){

    srand(time(0));

    int num = (rand() % 5) + 1;
    std::cout << "A Random number between 1 and 5 is : " << num << "\n";

    switch(num){
        case 1: std::cout << "You win a Bumper Sticker!\n";
        break;
        case 2: std::cout << "You win a T-Shirt!\n";
        break;
        case 3: std::cout << "You win a Free Lunch!\n";
        break;
        case 4: std::cout << "You win a Gift Card!\n";
        break;
        case 5: std::cout << "You win a Concert Ticket!\n";
        break;
    }
    
    return 0;
}