/*There are n books and m students. The task is to allocate all books to the students such that each
 student gets at least one book and the maximum number of pages assigned to a student is minimized.*/

#include<iostream>
using namespace std;

// Function to check if it is possible to allocate books
// such that no student reads more than 'mid' pages
bool ispossible(int arr[], int n, int m, int mid) {
    int studentCount = 1; // Initial count of students
    int pageSum = 0; // Sum of pages allocated to current student

    for (int i = 0; i < n; i++) {
        // If adding this book to current student doesn't exceed mid
        if (pageSum + arr[i] <= mid) {
            pageSum += arr[i]; // Add pages to current student's sum
        } else {
            studentCount++; // Allocate books to new student
            if (studentCount > m || arr[i] > mid) {
                return false; // Too many students or a book itself exceeds mid
            }
            pageSum = arr[i]; // Start counting pages for the new student
        }
    }
    return true; // Allocation is possible with given 'mid'
}

// Function to find the minimum possible maximum number of pages
int allocateBooks(int arr[], int n, int m) {
    int sum = 0; // Calculate the total number of pages
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int s = 0, e = sum; // Binary search range
    int ans = -1; // Variable to store the answer

    while (s <= e) {
        int mid = s + (e - s) / 2; // Find the midpoint
        // Check if it is possible to allocate books with 'mid' as the max pages
        if (ispossible(arr, n, m, mid)) {
            ans = mid; // Update answer
            e = mid - 1; // Try for a smaller maximum
        } else {
            s = mid + 1; // Try for a larger maximum
        }
    }

    return ans; // Return the minimum possible maximum number of pages
}

int main() {
    int arr[4] = {10, 20, 30, 40}; // Array of books with number of pages
    int m; // Number of students
    cout << "Enter the number of students: ";
    cin >> m;

    int result = allocateBooks(arr, 4, m); // Find the result
    if (result == -1) {
        cout << "\nIt is not possible to allocate books.\n";
    } else {
        cout << "\nThe minimum possible maximum number of pages is " << result << ".\n";
    }

    return 0;
}
