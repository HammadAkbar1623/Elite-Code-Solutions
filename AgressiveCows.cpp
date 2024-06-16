/*You are given a list of integers representing the positions of stalls in a linear barn. 
You need to place k cows in these stalls such that the minimum distance between 
any two cows is as large as possible.*/

#include<iostream>
#include<algorithm>
using namespace std;

// Function to check if it is possible to place cows with at least 'mid' distance apart
bool isPossible(int arr[], int n, int k, int mid){
    int cowCounter = 1;  // Start by placing the first cow
    int lastPosition = arr[0];  // Place the first cow at the first position

    // Iterate over the rest of the positions
    for(int i = 0; i < n; i++){
        // If the current position is at least 'mid' distance from the last position where we placed a cow
        if(arr[i] - lastPosition >= mid){
            cowCounter++;  // Place another cow
            // If all cows are placed successfully
            if(cowCounter == k){
                return true;
            }
            lastPosition = arr[i];  // Update the last position where we placed a cow
        }
    }

    // If not all cows can be placed with at least 'mid' distance apart
    return false;
}

// Function to find the largest minimum distance for placing the cows
int Allocate(int arr[], int n, int k){
    int ans = -1;  // Initialize answer to -1 (indicating no valid answer yet)
    sort(arr, arr+n);  // Sort the stall positions

    int s = 0;  // Start of the search space
    int maxee = -1;  // Maximum position in the array
    for(int i = 0; i < n; i++){
        maxee = max(maxee, arr[i]);  // Find the maximum position
    }
    int e = maxee;  // End of the search space (maximum position)

    // Binary search for the largest minimum distance
    while(s <= e){
        int mid = s + (e - s) / 2;  // Calculate the middle of the current search space

        // Check if it is possible to place cows with at least 'mid' distance apart
        if(isPossible(arr, n, k, mid)){
            ans = mid;  // Update the answer to the current middle value
            s = mid + 1;  // Search in the right half
        }
        else{
            e = mid - 1;  // Search in the left half
        }
    }

    return ans;  // Return the largest minimum distance found
}

int main(){
    int arr[5] = {4, 2, 1, 3, 6};  // Array of stall positions
    int k;  // Number of cows
    cout << "Enter number of cows: ";
    cin >> k;  // Input the number of cows

    int result = Allocate(arr, 5, k);  // Find the largest minimum distance
    if(result == -1){
        cout << "Allocation is not possible";  
    }
    else{
        cout << "\nThe largest minimum distance is: " << result;   
    }

    return 0;  
}
