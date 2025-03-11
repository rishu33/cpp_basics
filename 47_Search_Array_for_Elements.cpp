#include <iostream>

int search_in_array(int array[], int size, int element);

int main(){
    
    int numbers[] = {2,5,3,7,4,8,9,1,10,6};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    int match_index;
    int num_to_search;

    std::cout << "Enter a number: ";
    std::cin >> num_to_search;

    match_index = search_in_array(numbers, size, num_to_search);

    if(match_index != -1){
        std::cout << "The number " << num_to_search << " is at index " << match_index << " in the array.\n";
    }
    else{
        std::cout << "The number " << num_to_search << " is not present in the array.\n";
    }
    return 0;

}

int search_in_array(int array[], int size, int element){

    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }

    return -1;

}