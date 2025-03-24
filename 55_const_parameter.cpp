#include <iostream>

void print_info(std::string name, int age);
void print_info_2(std::string name, int age);
void print_info_3(const std::string name, const int age);
void print_info_4(const std::string &name, const int &age);

int main(){

    // const parameter = parameter that is read-only. Code becomes more useful and conveys intent.
    //                   useful for references and pointers

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