#include <iostream>

class Pizza{

    public:
        std::string topping1;
        std::string topping2;

    // Constructor overloading = We can have multiple constructors with same name
    //                           as long as the parameters are different.
    
    Pizza(){}

    Pizza(std::string topping1){
        this->topping1 = topping1;
    }

    Pizza(std::string topping1, std::string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }

};


int main(){

    Pizza pizza1("Tomato");
    std::cout << pizza1.topping1 << '\n';

    Pizza pizza2("Tomato", "Paprika");
    std::cout << pizza2.topping1 << '\n';
    std::cout << pizza2.topping2 << '\n';

    Pizza pizza3();

    return 0;
}