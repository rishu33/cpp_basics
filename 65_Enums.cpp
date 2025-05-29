#include <iostream>

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};
// NOTE : If we don't assign the values 0 to 6, they are automatically implicitly assigned.

int main(){

    // Enums (Enumerations) = A user-defined data type that consists of paired name-integer constants.
    //         GREAT if you have a set of potential options.

    Day today = sunday;

    switch(today){
        case sunday : std::cout << "It is Sunday!\n"; // or we can write case 0 : std...
                        break;
        case monday : std::cout << "It is Monday!\n";
                        break;
        case tuesday : std::cout << "It is Tuesday!\n";
                        break;
        case wednesday : std::cout << "It is Wednesday!\n";
                        break;
        case thursday : std::cout << "It is Thursday!\n";
                        break;
        case friday : std::cout << "It is Friday!\n";
                        break;
        case saturday : std::cout << "It is Saturday!\n";
                        break;
    }

    return 0;

}