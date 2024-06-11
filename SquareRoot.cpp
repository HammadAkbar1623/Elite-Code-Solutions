// Find the square root of a integer using Binary Search

#include <iostream>
using namespace std;

// Function to find the square root of an integer using Binary Search
int BinarySearch(int n) {
    // Initialize the start (s) and end (e) variables
    int s = 0;
    int e = n;

    // Variable to store the result (floor value of the square root)
    int ans = -1;

    // Binary Search loop
    while (s <= e) {
        // Calculate the mid point to divide the range into two halves
        long long int mid = s + (e - s) / 2;

        // Calculate the square of mid
        long long int square = mid * mid;

        // If the square of mid is equal to n, we found the exact square root
        if (square == n) {
            return mid;
        }

        // If the square of mid is greater than n, discard the right half
        if (square > n) {
            e = mid - 1;
        } else { // If the square of mid is less than n, discard the left half
            ans = mid; // Store the current mid as a potential answer
            s = mid + 1; // Continue the search in the right half
        }
    }

    
    return ans;
}

int main() {
    // Variable to store the input number
    int num;

    // Prompt the user to enter the number
    cout << "Enter number to find the square root: ";
    cin >> num;

    // Calculate and display the square root of the input number
    cout << "\nThe square root of the number is: " << BinarySearch(num);

    
    return 0;
}
