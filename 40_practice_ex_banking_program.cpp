#include <iostream>
#include <iomanip>

void show_balance(double balance);
double deposit();
double withdraw(double balance);

int main(){

    double balance = 0;
    int choice = 0;

    do{
        std::cout << "*****************\n";
        std::cout << "Enter your choice\n";
        std::cout << "*****************\n";
        std::cout << "1. Show balance\n";
        std::cout << "2. Deposit money\n";
        std::cout << "3. Withdraw money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear();  // Reset error state
            std::cin.ignore(10000, '\n');  // Discard invalid input
            choice = 0;
        }

        switch(choice){
            case 1: show_balance(balance);
                    break;
            case 2: balance += deposit();
                    show_balance(balance);
                    break;
            case 3: balance -= withdraw(balance);
                    show_balance(balance);
                    break;
            case 4: std::cout << "Thank you for visiting.\n";
                    break;
            default: std::cout << "Invalid Choice.\n";
        }
    }while(choice != 4);

    return 0;

}

void show_balance(double balance){
    std::cout << "Your Balance is " << std::setprecision(2) << std::fixed << balance << " Euros.\n";
}

double deposit(){
    double amount = 0;
    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    if(amount < 0){
        std::cout << "That's not a valid amount.\n";
        return 0;
    }
    else{
        return amount;
    }
}

double withdraw(double balance){

    double amount = 0;
    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;

    if(amount > balance){
        std::cout << "Insufficient balance.\n";
        return 0;
    }
    else if(amount < 0){
        std::cout << "That's not a valid amount.\n";
        return 0;
    }
    else{
        return amount;
    }
}