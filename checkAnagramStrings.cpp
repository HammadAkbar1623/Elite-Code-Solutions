// Given two strings, check if they are anagrams or not

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool areAnagrams(const string& str1, const string& str2) {
    // Check if the lengths of the strings are equal
    if (str1.length() != str2.length()) {
        return false;
    }

    // Sort both strings
    string sorted_str1 = str1;
    string sorted_str2 = str2;
    sort(sorted_str1.begin(), sorted_str1.end());
    sort(sorted_str2.begin(), sorted_str2.end());

    // Compare sorted strings
    return sorted_str1 == sorted_str2;
}

int main() {
    string str1, str2;
    
    // Taking input from the user
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;
    
    // If true, strings are anagrams
    if (areAnagrams(str1, str2)) {
        cout << "The strings are anagrams." << std::endl;
    } else {
        cout << "The strings are not anagrams." << std::endl;
    }

    return 0;
}
