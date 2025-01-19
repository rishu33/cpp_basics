#include <iostream>

int main(){

    // Convert temperature from Farenheit to Celsius or Celsius to Farenheit.

    std::cout << "**********************Temperature Conversion**********************\n";
    
    double temp;
    char unit;

    std::cout << "F = Farenheit \n";
    std::cout << "C = Celsius \n";
    
    std::cout << "What unit would you like your temperature to convert to: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter temperature value in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "The temperature in Farenheit is " << temp << "°F \n";
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter temperature value in Farenheit: ";
        std::cin >> temp;

        temp = (temp - 32.0) / 1.8;
        std::cout << "The temperature in Celsius is " << temp << "°C \n";
    }
    else{
        std::cout << "Please enter a valid unit and temperature value. \n";
    }
        
    std::cout << "******************************************************************";

    
    return 0;
}