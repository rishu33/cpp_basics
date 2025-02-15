#include <iostream>
#include <ctime>

char get_user_choice();
char get_computer_choice();
void show_choice(char choice);
void choose_winner(char player, char computer);

int main(){
    char player, computer;

    player = get_user_choice();
    std::cout << "Your choice is: ";
    show_choice(player);

    computer = get_computer_choice();
    std::cout << "Computer's choice is: ";
    show_choice(computer);
    
    choose_winner(player, computer);

    return 0;

}

char get_user_choice(){
    
    char player;
    
    std::cout << "*************************\n";
    std::cout << "Rock-Paper-Scissors Game!\n";
    std::cout << "*************************\n";
    
    do{
        std::cout << "'r' for Rock\n";
        std::cout << "'p' for Paper\n";
        std::cout << "'s' for Scissors\n";
        std::cout << "Enter your choice: ";
        std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');

    return player;
}

char get_computer_choice(){
    
    char computer;
    srand(time(0));
    int num = rand() % 3 + 1;

    switch(num){
        case 1: computer = 'r';
        break;
        case 2: computer = 'p';
        break;
        case 3: computer = 's';
        break;
    }

    return computer;
}

void show_choice(char choice){
    
    switch(choice){
        case 'r': std::cout << "Rock\n";
        break;
        case 'p': std::cout << "Paper\n";
        break;
        case 's': std::cout << "Scissors\n";
        break;
    }
}

void choose_winner(char player, char computer){

    switch(player){
        case 'r':   if(computer == 'r'){
                        std::cout << "It's a Tie!";
                    }
                    else if(computer == 'p'){
                        std::cout << "Computer Wins!";
                    }
                    else{
                        std::cout << "You Win!";
                    }
                    break;
        case 'p':   if(computer == 'r'){
                        std::cout << "You Win!";
                    }
                    else if(computer == 'p'){
                        std::cout << "It's a Tie!";
                    }
                    else{
                        std::cout << "Computer Wins!";
                    }
                    break;
        case 's':   if(computer == 'r'){
                        std::cout << "Computer Wins!";
                    }
                    else if(computer == 'p'){
                        std::cout << "You Win!";
                    }
                    else{
                        std::cout << "It's a Tie!";
                    }
                    break;
    }
    std::cout << '\n';
}