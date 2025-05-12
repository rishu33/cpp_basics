#include <iostream>

int get_digit(const int number);
int sum_odd_digits(const std::string cardNumber);
int sum_even_digits(const std::string cardNumber);

int main(){

    // In this program we will test the Credit card number if it is valid or not.
    // This is done with the help of Luhm Algorithm

    // Luhn Algorithm:
    // 1. Double every second digit from right to left. If doubled number is 2 digits, split them.
    // 2. Add all single digits from Step 1.
    // 3. Add all odd numbered digits from right to left.
    // 4. Sum results from Step 2 and Step 3.
    // 5. If Step 4 is divisible by 10, # is Valid.

    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card number: ";
    std::cin >> cardNumber;

    result = sum_even_digits(cardNumber) + sum_odd_digits(cardNumber);
    
    return 0;

}


int get_digit(const int number){
    return 0;
}

int sum_odd_digits(const std::string cardNumber){
    return 0;
}

int sum_even_digits(const std::string cardNumber){
    
    int sum = 0;

    
    return 0;
}