#include <iostream>

int main(){
    
    // Integer (whole Number)
    int x;      // Declaration
    x = 5;      // Assignment
    std::cout << x << '\n';

    int a = 4;
    int b = 3;
    int sum = a+b;
    std::cout << "Sum = " << sum << '\n';

    int age = 21;
    int year = 2020;
    int days = 7.5;
    std::cout << days << '\n';

    // Double (Numbers including decimals)
    double gpa = 9.95;
    double price = 10.99;
    double temperature = 25.1;
    std::cout << price << '\n';

    // Single Character
    char grade = 'A';
    char initial = 'K';
    char currency = '$';
    std::cout << initial << '\n';

    // Boolean (true or false)
    bool isStudent = true;
    bool lightSwitch = false;
    bool forSale = true;

    // String (objects that represent a sequence of text)
    std::string name = "Bro";
    std::string day = "Friday";
    std::string food = "Pizza";
    std:: string address = "123 Fake Street";
    std::cout << name << '\n';
    std::cout << "Hello " << name << '\n';
    std::cout << "Are you free on " << day << " for a " << food << '\n';

    return 0;
}