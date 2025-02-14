#include <iostream>

void bake_pizza();
void bake_pizza(std::string topping1);
void bake_pizza(std::string topping1, std::string topping2);

int main(){

    bake_pizza();
    bake_pizza("spinach");
    bake_pizza("apple","pineapple");

    return 0;
}

void bake_pizza(){
    std::cout << "Here is your boring Pizza!\n";
}

void bake_pizza(std::string topping1){
    std::cout << "Here is your " << topping1 << " Pizza!\n";
}

void bake_pizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " << topping1 << " & " << topping2 << " Pizza!\n";
}