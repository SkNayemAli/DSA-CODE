#include <iostream>
using namespace std;

// Structure to represent an array with its size and length
struct Array {
    int A[10];    // Array of integers
    int size;     // Maximum size of the array
    int length;   // Current number of elements in the array
};

// Function to display the elements of the array
void Display(struct Array arr) {
    cout << "\nElements are\n";
    for (int i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
    cout << "\n\n";
}

// Function to swap two integers
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

// Iterative Binary Search function
int BinarySearch(struct Array arr, int key) {
    int l, mid, h;
    l = 0;                // Initial lower bound
    h = arr.length - 1;   // Initial upper bound

    while (l <= h) {
        mid = (l + h) / 2;  // Find the middle index

        if (key == arr.A[mid]) {
            return mid;    // Key found at mid index
        } else if (key < arr.A[mid]) {
            h = mid - 1;   // Adjust the upper bound
        } else {
            l = mid + 1;   // Adjust the lower bound
        }
    }

    return -1;  // Key not found
}

// Recursive Binary Search function
int RBinSearch(int a[], int l, int h, int key) {
    int mid;
    if (l <= h) {
        mid = (l + h) / 2;  // Find the middle index

        if (key == a[mid]) {
            return mid;    // Key found at mid index
        } else if (key < a[mid]) {
            return RBinSearch(a, l, mid - 1, key);  // Search in the left half
        } else {
            return RBinSearch(a, mid + 1, h, key);  // Search in the right half
        }
    }

    return -1;  // Key not found
}

int main() {
    // Initialize array
    struct Array arr1 = {{2, 3, 9, 16, 18, 21, 28, 32, 35}, 10, 9};  
    
    int key = 16;  // Key to be searched
    int result = BinarySearch(arr1, key);  // Perform binary search

    if (result != -1) {
        // If key is found, print the index
        cout << "\nElement " << key << " found at index " << result << "\n";
    } else {
        // If key is not found, print a message
        cout << "\nElement " << key << " not found\n";
    }

    // Display the array elements
    Display(arr1);  
    return 0;
}
