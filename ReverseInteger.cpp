/* Question Statement:
Given a signed integer x, return x wih its digits reversed. If reversing x causes the value to go outside the
signed 32 bit integer range, then return 0.*/

#include<iostream>
#include<climits>
using namespace std;

int main(){

    int num;
    cin >> num;  // Read the integer input from the user

    int ans = 0;  // This will hold the reversed number
    while(num != 0){
        int digit = num % 10;  // Get the last digit of the number

        // Check if reversing the number will cause an overflow
        if(ans > (INT_MAX / 10) || ans < (INT_MIN / 10)){
            cout << "Overflow occurred, cannot reverse the number safely.";
            return 0;  // If there's a risk of overflow, exit the program
        }

        ans = (ans * 10) + digit;  // Add the last digit to the reversed number
        num = num / 10;  // Remove the last digit from the original number
    }

    cout << "The reverse integer is " << ans;  // Print the reversed number
    return 0;  // Indicate that the program ended successfully
}
