#include <iostream>

int main(){
    
    // sizeof() = determines the size in bytes of a:
    //            variable, datatype, class, object, etc

    double gpa = 3.48;
    std::cout << "Size of double " << gpa << " is " << sizeof(gpa) << " bytes.\n";
    std::cout << "Size of datatype double is " << sizeof(double) << " bytes.\n";

    std::string name = "Hello";
    std::cout << "Size of string " << name << " is " << sizeof(name) << " bytes.\n";
    std::cout << "Size of datatype std::string is " << sizeof(std::string) << " bytes.\n";

    char grade = 'A';
    std::cout << "Size of char " << grade << " is " << sizeof(grade) << " bytes.\n";
    std::cout << "Size of datatype char is " << sizeof(char) << " bytes.\n";

    bool pass = true;
    std::cout << "Size of boolean " << pass << " is " << sizeof(pass) << " bytes.\n";
    std::cout << "Size of datatype boolean is " << sizeof(bool) << " bytes.\n";

    // sizeof() an array
    char grades[] = {'A','B','C','D','E','F'};
    std::cout << "Size of array {'A','B','C','D','E','F'} is " << sizeof(grades) << " bytes.\n";
    
    // To calculate the number of elements in an array
    std::cout << "The array {'A','B','C','D','E','F'} contains " << sizeof(grades)/sizeof(grades[0]) << " elements.\n";

    // This works with all datatypes
    std::string students[] = {"Patrick", "Spongebob", "Squidward"};
    std::cout << "The array {\"Patrick\", \"Spongebob\", \"Squidward\"} contains " << sizeof(students)/sizeof(students[0]) << " elements.\n";

    double marks[] = {78, 87, 86, 98, 59};
    std::cout << "The array {78, 87, 86, 98, 59} contains " << sizeof(marks)/sizeof(marks[0]) << " elements.\n";
    
    return 0;

}