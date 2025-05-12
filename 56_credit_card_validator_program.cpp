#include <iostream>


int main(){

    // In this program we will test the Credit card number if it is valid or not.
    // This is done with the help of Luhm Algorithm

    // Luhn Algorithm:
    // 1. Double every second digit from right to left. If doubled number is 2 digits, split them.
    // 2. Add all single digits from Step 1.
    // 3. Add all odd numbered digits from right to left.
    // 4. Sum results from Step 2 and Step 3.
    // 5. If Step 4 is divisible by 10, # is Valid.

    

    std::string name = "Shahrukh";
    int age = 25;

    print_info(name, age);
    print_info_2(name, age);
    print_info_3(name, age);
    print_info_4(name, age);

    return 0;

}

void print_info(std::string name, int age){
    std::cout << name << '\n';
    std::cout << age << '\n';
}

void print_info_2(std::string name, int age){
    name = "Unnamed";
    age = 0;
    std::cout << name << '\n';
    std::cout << age << '\n';
}

void print_info_3(const std::string name, const int age){
    
    // Below 2 lines will now show error since we are trying to change the value which is declared constant.
    // name = " ";
    // age = 0;
    
    // NOTE: still, only the copy of values of name and age inside the function are constant.
    //       The original values in main function are not constant.
    std::cout << name << '\n';
    std::cout << age << '\n';
}

void print_info_4(const std::string &name, const int &age){
    
    // Below 2 lines will now show error since we are trying to change the value which is declared constant.
    // name = " ";
    // age = 0;
    
    // NOTE: Here the addresses of original (from main function) values are set constant.
    std::cout << name << '\n';
    std::cout << age << '\n';
}