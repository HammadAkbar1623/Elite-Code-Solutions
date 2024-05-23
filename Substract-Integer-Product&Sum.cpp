// Given an number n, find product and sum of that number and then substract them.

#include<iostream>
using namespace std;

int main() {
    int num;  
    cin >> num;  // Take input from the user

    int product = 1;  // Initialize product of digits to 1 (multiplicative identity)
    int sum = 0;  // Initialize sum of digits to 0

    // Loop to process each digit of the number
    while(num != 0) {
        int digit = num % 10;  // Extract the last digit of the number
        product = product * digit;  // Update the product with the current digit
        sum = sum + digit;  // Update the sum with the current digit

        num = num / 10;  // Remove the last digit from the number
    }

    int ans = product - sum;  // Calculate the final answer by subtracting the sum from the product

    // Output the result to the user
    cout << "The number after subtracting product and sum is " << ans;

    return 0;  // Indicate that the program ended successfully
}