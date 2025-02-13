#include <iostream>
#include <ctime>

int main(){

    int num;
    int guess;
    int tries = 0;

    srand(time(0));

    num = (rand() % 10) + 1;

    std::cout << "********** Number Guessing Game **********\n";

    do{
        std::cout << "Enter a guess between 1 and 100: ";
        std::cin >> guess;
        tries ++;

        if(guess > num){
            std::cout << "Too High!\n";
        }
        else if(guess < num){
            std::cout << "Too Low!\n";
        }
        else{
            std::cout << "CORRECT! # of tries: " << tries << '\n';
        }
    }while(guess != num);
    
    std::cout << "******************************************\n";

    return 0;
}