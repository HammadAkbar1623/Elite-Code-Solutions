/*Given an array, find First and Last occurrence of an element in an array. */

#include<iostream>
using namespace std;

// Function to read array elements from user input
void getData(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cin >> arr[i]; // Read each element and store it in the array
    }
}

// Function to find the first occurrence of a key in a sorted array
int firstOcc(int arr[], int size, int key) {
    int s = 0, e = size - 1; // Initialize start and end pointers
    int mid = s + (e - s) / 2; // Calculate the middle index
    int ans = -1; // Variable to store the index of the first occurrence

    // Binary search loop
    while(s <= e) {
        if(arr[mid] == key) { // If key is found at mid
            ans = mid; // Update answer
            e = mid - 1; // Move end pointer to the left to find the first occurrence
        }
        else if(key > arr[mid]) { // If key is greater than mid element
            s = mid + 1; // Move start pointer to the right
        }
        else if(key < arr[mid]) { // If key is smaller than mid element
            e = mid - 1; // Move end pointer to the left
        }
        mid = s + (e - s) / 2; // Recalculate mid
    }
    return ans; // Return the index of the first occurrence
}

// Function to find the last occurrence of a key in a sorted array
int LastOcc(int arr[], int size, int key) {
    int s = 0, e = size - 1; // Initialize start and end pointers
    int mid = s + (e - s) / 2; // Calculate the middle index
    int ans = -1; // Variable to store the index of the last occurrence

    // Binary search loop
    while(s <= e) {
        if(arr[mid] == key) { // If key is found at mid
            ans = mid; // Update answer
            s = mid + 1; // Move start pointer to the right to find the last occurrence
        }
        else if(key > arr[mid]) { // If key is greater than mid element
            s = mid + 1; // Move start pointer to the right
        }
        else if(key < arr[mid]) { // If key is smaller than mid element
            e = mid - 1; // Move end pointer to the left
        }
        mid = s + (e - s) / 2; // Recalculate mid
    }
    return ans; // Return the index of the last occurrence
}

int main() {
    int arr[5]; // Declare an array of size 5
    int num; // Variable to store the element to search for

    cout << "Enter a sorted array: ";
    getData(arr, 5); // Call function to read array elements

    cout << "\nEnter element to search: ";
    cin >> num; // Read the element to search for

    // Output the first and last occurrences of the element in the array
    cout << "The first occurrence of " << num << " is at Index " << firstOcc(arr, 5, num);
    cout << "\nThe last occurrence of " << num << " is at Index " << LastOcc(arr, 5, num);

    return 0; // Return 0 to indicate successful execution
}

