#include <iostream>

std::string concat_strings(std::string str1, std::string str2);

int main(){

    // return = return a value back to the spot where you called the encompassing function

    std::string fname, lname, name;

    std::cout << "Enter First Name: ";
    std::cin >> fname;

    std::cout << "Enter Last Name: ";
    std::cin >> lname;

    name = concat_strings(fname, lname);
    std::cout << "Hello " << name << '\n';

    return 0;
}

std::string concat_strings(std::string str1, std::string str2){
    return str1 + " " + str2;
}