/* Write a program that takes an array of 5 integers and an index 'm' from the user,
 then reverses the elements of the array after the index m. */

 #include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Function to get user input for the array
void GetData(vector<int>& arr, int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Read each element from the user
    }
}

// Function to reverse the elements of the array after index m
void reverseArray(vector<int>& arr, int m) {
    int s = m + 1; // Start index for reversing
    int e = arr.size() - 1; // End index for reversing
    while (s <= e) {
        swap(arr[s], arr[e]); // Swap the elements at start and end
        s++; // Move start index forward
        e--; // Move end index backward
    }
    // Print the modified array
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    vector<int> arr(5); // Initialize a vector of size 5
    cout << "Enter elements of array: ";
    GetData(arr, 5); // Get array elements from the user

    int m;
    cout << "\nEnter index to reverse: ";
    cin >> m; // Get the index after which to reverse the array

    cout << "\nArray after reversing: ";
    reverseArray(arr, m); // Reverse the array elements after index m

    return 0;
}
