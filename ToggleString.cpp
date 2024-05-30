// Toggle a string 

#include<iostream>  
#include<string>    
using namespace std; 

int main() {
    string str; 
    cout << "Enter a string: ";
    // Taking input from the user
    getline(cin, str);
    
    // Loop through each character in the string until the end of the string
    for(int i = 0; str[i] != '\0'; i++) {
        // Check if the current character is a lowercase letter
        if(islower(str[i])) {
            // Convert the lowercase letter to an uppercase letter
            str[i] = toupper(str[i]);
        }
        // Check if the current character is an uppercase letter
        else if(isupper(str[i])) {
            // Convert the uppercase letter to a lowercase letter
            str[i] = tolower(str[i]);
        }
    }
    
    // Output the toggled string
    cout << "\nThe toggle string is: " << str;
    
    return 0; // Indicate that the program ended successfully
}
