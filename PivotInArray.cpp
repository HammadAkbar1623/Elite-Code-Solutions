#include<iostream>
using namespace std;

// Function to find the pivot in a rotated sorted array
int FindPivot(int arr[], int size){
    int s = 0; // Start index
    int e = size - 1; // End index
    int mid = s + (e - s) / 2; // Calculate the mid index to avoid overflow

    // Loop until the start index is less than the end index
    while(s < e){
        // If the mid element is greater than or equal to the first element
        // it means the pivot is in the second half of the array
        if(arr[mid] >= arr[0]){
            s = mid + 1; // Move the start index to mid + 1
        }
        else{
            // If the mid element is less than the first element
            // it means the pivot is in the first half of the array
            e = mid; // Move the end index to mid
        }
        // Recalculate the mid index
        mid = s + (e - s) / 2;
    }
    // Return the start index which points to the pivot
    return s;
}

int main(){
    // Initialize an array
    int arr[5] = {3, 8, 10, 17, 1};
    // Call FindPivot and print the result
    cout << "The pivot is at index " << FindPivot(arr, 5);

    return 0;
}
