// Given a sentence, reverse words of the sentence

#include <iostream>
#include <cstring>
using namespace std;

// Function to reverse characters in a word
void reverse(char* start, char* end) {
    // Swap characters from the start and end until they meet in the middle
    while (start < end) {
        swap(*start++, *end--);
    }
}

int main() {
    char sentence[30]; // Array to hold the input sentence
    cout << "Enter a sentence: ";
    cin.getline(sentence, 30); // Read the entire line of input including spaces

    int length = strlen(sentence); // Get the length of the input sentence
    int start = 0; // Initialize the start index of a word

    // Loop through the sentence character by character
    for (int i = 0; i <= length; i++) {
        // Check if the current character is a space or the end of the string
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            // Reverse the characters of the current word
            reverse(sentence + start, sentence + i - 1);
            // Update the start index to the next character after the space
            start = i + 1;
        }
    }

    // Output the modified sentence
    cout << "After reversing words: " << sentence << endl;

    return 0;
}
