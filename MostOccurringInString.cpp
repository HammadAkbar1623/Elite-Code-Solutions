// Find the most occurring alphabet in a string

#include<iostream>
using namespace std;

// Function to find the most occurring character in a string
char most(string s) {
    // Array to keep count of each character (assuming only lowercase a-z)
    int arr[26] = {0};

    // Traverse the string and count occurrences of each character
    for(int i = 0; i < s.length(); i++) {
        char ch = s[i];
        int number = ch - 'a';  // Calculate the index (0 for 'a', 1 for 'b', ..., 25 for 'z')

        arr[number]++;  // Increment the count for the character
    }

    int maxi = -1, ans = 0;
    // Find the character with the maximum count
    for(int i = 0; i < 26; i++) {
        if(maxi < arr[i]) {
            ans = i;  // Update the index of the most occurring character
            maxi = arr[i];  // Update the maximum count
        }
    }

    char final = 'a' + ans;  // Convert the index back to the corresponding character
    return final;
}

int main() {
    string s;
    cin >> s;  // Input the string from the user
    cout << "Most occurring element is " << most(s) << endl;  // Output the most occurring character
    return 0;
}
