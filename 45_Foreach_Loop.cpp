#include <iostream>

int main(){
    
    // Foreach Loop : Loop that eases the traversal over an iterable dataset (Array)

    std::string students[] = {"Spongebob", "Patrick", "Squidward"};


    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
        std::cout << students[i] << '\n';
    }

    // Another Way using Foreach Loop

    for(std::string student : students){
        std::cout << student << '\n';
    }

    // Another Example

    char grades[] = {65,76,87,98,100};

    for(int grade : grades){
        std::cout << grade << '\n';
    }

    return 0;

}