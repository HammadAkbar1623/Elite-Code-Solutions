/* Given an unsigned integer x, find number of '1' Bits in it  */

#include<iostream>
using namespace std;

int main(){
    int num;
    // Read an integer input from the user
    cin >> num;

    // Initialize a counter to keep track of the number of 1 bits
    
    int count = 0;

    // Loop until all bits of the number are processed

    while(num != 0){

        // Check if the least significant bit (rightmost bit) is 1
        if(num & 1){
            // If it is 1, increment the counter
            count++;
        }
        // Right shift the number by 1 bit to process the next bit
        num = num >> 1;
    }

    // Output the count of 1 bits in the binary representation of the number
    cout << "The number of 1 digits are " << count;

    return 0;
}
