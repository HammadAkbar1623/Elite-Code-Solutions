// Check if the number lies within the power of 2 or Not


#include <iostream>
using namespace std;

// Function to check if a number is a power of 2
bool isPowerOfTwo(int n) {
    // A number is a power of 2 if it is greater than 0 and has exactly one bit set in its binary representation
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n; // Input the number to be checked

    // Check if the number is a power of 2 and print the appropriate message
    if (isPowerOfTwo(n)) {
        cout << "The number is a power of 2";
    } else {
        cout << "The number is not a power of 2";
    }

    return 0;
}
