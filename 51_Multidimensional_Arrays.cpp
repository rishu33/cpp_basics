#include <iostream>

int main(){

    std::string foods[5];
    std::string temp;
    int size = sizeof(foods)/sizeof(foods[0]);

    for(int i = 0; i < size; i++){
        std::cout << "Enter #" << i+1 << " food you like or 'q' to quit: ";
        std::getline(std::cin, temp);

        if(temp == "q"){
            break;
        }
        else{
            foods[i] = temp;
        }
    }
    
    std::cout << "You like the following foods:\n";

    for(int i = 0; !foods[i].empty(); i++){
        std::cout << foods[i] << ' ';
    }
    std::cout << '\n';

    return 0;

}
