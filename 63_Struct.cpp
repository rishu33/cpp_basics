#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled = true;
};

int main(){

    // Struct = A structure that groups related variables under one name.
    //          A Struct can contain many different data types (string, int, double, bool, etc.)
    //          Variables in a Struct are called Members.
    //          Members can be accessed with - "Class Member Access Operator"
    
    student student1, student2;

    student1.name = "Spongebob";
    student1.gpa = 1.8;
    // student1.enrolled = true;      NOT required because default value is set to true.

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    student2.name = "Patrick";
    student2.gpa = 1.3;
    student2.enrolled = false;

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    return 0;

}