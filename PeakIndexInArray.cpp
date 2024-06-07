// Find Peak index in an Mountain Array


#include <iostream>  
using namespace std;

int main() {
    const int n = 5;  // Define a constant for the array size
    int arr[n];       // Declare an array of size 'n'
    int peakIndex = -1;  // Variable to store the index of the peak element, initialized to -1 (meaning no peak found yet)

    // Prompt the user to enter elements of the array
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  
    }

    // Iterate through the array to find a peak element
    // A peak element is greater than its neighbors
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            peakIndex = i;  // If a peak is found, store its index in peakIndex
            break;  // Exit the loop as we have found the peak
        }
    }

    // Check if a peak element was found
    if (peakIndex != -1) {
        // If found, print the peak element and its index
        cout << "The peak mountain element is " << arr[peakIndex] << " at index " << peakIndex << endl;
    } else {
        // If no peak element was found, print a message indicating that
        cout << "No peak element found" << endl;
    }

    return 0;  
}
