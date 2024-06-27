// Given an Array, shift all the zeros to the right and keep the order of Non zero elements same

#include<iostream>  
using namespace std;  

int main() {
    int arr[5] = {0, 3, 2, 0, 1};  
    
    int i = 0;  // Initialize a variable 'i' to keep track of the position for non-zero elements

    // Loop through each element in the array
    for(int j = 0; j < 5; j++) {
        if(arr[j] != 0) {  // If the current element is not zero
            swap(arr[j], arr[i]);  // Swap the current element with the element at position 'i'
            i++;  // Increment 'i' to point to the next position for non-zero elements
        }
    }

    // Print the modified array
    cout << "The new array is: ";
    for(int k = 0; k < 5; k++) {
        cout << arr[k] << " ";  // Print each element of the array
    }
    return 0;  
}
