#include <iostream>

int main(){

    // const parameter = parameter that is read-only. Code becomes more useful and conveys intent.
    //                   useful for references and pointers

    std::string name = "Shahrukh";
    int age = 25;

    
    return 0;

}

void print_info(std::string name, int age){
    std::cout << name << '\n';
    std::cout << age << '\n';
}