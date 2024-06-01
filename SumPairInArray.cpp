// User will enter a Array and also a number, find sum of which two elements of array is equal to that number

#include <iostream>
using namespace std;

// Function to get array data from the user
void getData(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

int main() {
    const int SIZE = 5;  // Define the size of the array
    int arr[SIZE];       // Array to hold the elements
    int pairs[SIZE][2];  // Array to store pairs of elements that sum up to the given number
    int num;             // The number to compare against
    int pairCount = 0;   // To keep track of the number of pairs found

    // Prompt the user to enter array elements
    cout << "Enter array elements: " << endl;
    getData(arr, SIZE);

    // Prompt the user to enter the number to compare
    cout << "Enter number to compare: " << endl;
    cin >> num;

    // Iterate through the array to find pairs that sum up to the given number
    for (int i = 0; i < SIZE; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            if (arr[i] + arr[j] == num) {
                pairs[pairCount][0] = arr[i];  // Store the first element of the pair
                pairs[pairCount][1] = arr[j];  // Store the second element of the pair
                pairCount++;  // Increment the pair count
            }
        }
    }

    // If pairs are found, display them
    if (pairCount > 0) {
        cout << "The pairs are: " << endl;
        for (int i = 0; i < pairCount; i++) {
            cout << "(" << pairs[i][0] << ", " << pairs[i][1] << ") ";
        }
        cout << endl;
    } else {
        // If no pairs are found, inform the user
        cout << "No pairs found that sum up to " << num << endl;
    }

    return 0;  // Indicate that the program ended successfully
}
