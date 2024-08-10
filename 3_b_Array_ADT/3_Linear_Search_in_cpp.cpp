#include <iostream>
using namespace std;

// Class representing an array
class Array {
public:
    int A[10];  // Array to store elements
    int size;   // Maximum size of the array
    int length; // Current number of elements in the array

    // Function to display the elements of the array
    void Display() {
        cout << "Array is: " << endl;
        for (int i = 0; i < length; i++) {
            cout << A[i] << " ";
        }
        cout << endl << endl;
    }

    // Function to swap two elements
    void swap(int &x, int &y) {
        int temp = x;
        x = y;
        y = temp;
    }

    // Function to perform linear search for a key in the array
    // Returns the index of the key if found, otherwise returns -1
    int LinearSearch(int key) {
        for (int i = 0; i < length; i++) {
            if (key == A[i]) {
                return i; // Return the index of the found element
            }
        }
        return -1; // Return -1 if the element is not found
    }

    // Function to perform an operation (transposition) when the key is found
    // Moves the found element one position to the left
    // Returns the index of the found element, otherwise returns -1
    int Operation(int key) {
        for (int i = 0; i < length; i++) {
            if (key == A[i]) {
                swap(A[i], A[i - 1]); // Transposition: swap with the previous element
                return i; // Return the index of the found element
            }
        }
        return -1; // Return -1 if the element is not found
    }
};

int main() {
    // Initializing the array with given elements, size, and length
    Array arr1 = {{2, 23, 14, 5, 6, 9, 8, 12}, 10, 8};
    
    // Performing linear search for the key '5'
    int index = arr1.LinearSearch(5);
    if (index != -1) {
        cout << "\nElement is found at index: " << index << endl << endl;
    } else {
        cout << "\nElement not found" << endl;
    }

    // Display the array before the operation
    arr1.Display();

    // Performing the transposition operation on the key '5'
    arr1.Operation(5);
    cout << "After transposition operation the ";

    // Display the array after the operation
    arr1.Display();

    return 0;
}
