// Given Two arrays, Find intersection between them

#include<iostream>
#include<climits> // For using INT_MIN
using namespace std;

int main() {
    // Initialize two arrays with 5 elements each
    int arr1[5] = {1, 2, 6, 8, 9};
    int arr2[5] = {1, 4, 7, 9, 10};

    // Array to store the intersection of arr1 and arr2
    int ans[5];

    // Index to keep track of the position in the ans array
    int k = 0;

    // Loop through each element in arr1
    for(int i = 0; i < 5; i++) {
        int element = arr1[i]; // Current element in arr1

        // Loop through each element in arr2
        for(int j = 0; j < 5; j++) {
            // If the element in arr1 is found in arr2
            if(element == arr2[j]) {
                ans[k++] = element; // Add the element to the ans array
                arr2[j] = INT_MIN; // Mark the element in arr2 as visited
            }
        }
    }

    // Print the elements that are the intersection of arr1 and arr2
    cout << "The intersection of two arrays gives " << endl;
    for(int i = 0; i < k; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
