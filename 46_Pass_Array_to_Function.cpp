#include <iostream>

double get_total(double prices[], int size);

int main(){
    
    double prices[] = {49.99, 75, 15.05, 9.99};

    // Compute the size of array
    int size = sizeof(prices)/sizeof(prices[0]);

    // We will create a function to compute the sum of all these prices.
    double total = get_total(prices, size);

    std::cout << "EUR " << total << '\n';

    return 0;

}

double get_total(double prices[], int size){
    double total = 0;

    for(int i = 0; i < size; i++){
        total += prices[i];
    }

    // We took size separately as a input to funciton because when we input array to a function,
    // the array converts itself to a pointer, that points to the address of where the array begins
    // and the pointer does not have any information on how long the array is.
    // More on pointers will be discussed in detail in further tutorials.

    return total;
}