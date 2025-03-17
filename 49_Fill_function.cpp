#include <iostream>

int main(){
    
    // fill() = fills a range of elements with a specified values
    //          fill(begin, end, value)

    std::string foods[10] = {"pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza"};

    for(std::string food:foods){
        std::cout << food << ' ';
    }
    std::cout << '\n';

    // Easier way to do this

    std::string fruits[10];
    fill(fruits, fruits + 10, "Apple");

    for(std::string fruit:fruits){
        std::cout << fruit << ' ';
    }
    std::cout << '\n';

    // Filling within different ranges

    fill(fruits, fruits + 10/2, "Banana");
    fill(fruits + 10/2, fruits + 10, "Kiwi");

    for(std::string fruit:fruits){
        std::cout << fruit << ' ';
    }
    std::cout << '\n';

    // Similarly we can fill different ranges

    return 0;

}
