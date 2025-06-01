#include <iostream>

class Stove{
    private:
        int temperature = 0;

    public:

        // Getter
        int get_temperature(){
            return temperature;
        }

        // Setter
        void set_temperature(int temperature){
            this->temperature = temperature;
        }

};

int main(){

    // Abstraction = hiding unnecessary data from outside a class.
    // Getter = A function that makes a private attribute READABLE.
    // Setter = A function that makes a private attribute WRITABLE.

    Stove stove;

    std::cout << "The temperature stetting is " << stove.get_temperature() << '\n';

    stove.set_temperature(1000000);

    std::cout << "The temperature stetting is " << stove.get_temperature() << '\n';

    return 0;
}