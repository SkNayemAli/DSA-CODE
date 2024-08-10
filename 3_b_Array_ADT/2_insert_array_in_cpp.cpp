#include <iostream> // Include the iostream library for input/output operations
using namespace std; // Use the standard namespace

// Define the Array class
class Array {
private:
    int A[10]; // Array to hold the elements
    int size; // Maximum size of the array
    int length; // Current number of elements in the array

public:
    // Default constructor to initialize the size and length
    Array() {
        size = 10;
        length = 0;
    }

    // Parameterized constructor to initialize the array with given values
    Array(int arr[], int s, int l) {
        for (int i = 0; i < l; i++) {
            A[i] = arr[i]; // Initialize the array with the given values
        }
        size = s; // Initialize the size member
        length = l; // Initialize the length member
    }

    // Function to display the elements of the array
    void Display() const {
        for (int i = 0; i < length; i++) {
            cout << A[i] << " "; // Print each element
        }
        cout << endl; // Print a new line at the end
    }

    // Function to append an element at the end of the array
    void Append(int x) {
        if (length < size) { // Check if there is space to add the element
            A[length++] = x; // Add the element and increment the length
        }
    }

    // Function to insert an element at a specific index
    void Insert(int index, int x) {
        if (index >= 0 && index <= length) { // Check if the index is valid
            for (int i = length; i > index; i--) { // Shift elements to the right
                A[i] = A[i - 1];
            }
            A[index] = x; // Insert the element at the specified index
            length++; // Increment the length
        }
    }


void Delete(int index){
    if (index >= 0 && index <= length){
        for (int i = index; i < length - 1; i++){
            A[i] = A[i + 1];
        }
        length--;
    }
}
};

int main() {
    int initialArray[] = {2, 3, 4, 5, 6}; // Initial array to be used for initialization
    Array arr1(initialArray, 10, 5); // Create an Array object with initial values, size 10, and length 5

    cout << endl << "Before do any operation array is: " << endl;
    arr1.Display();
    cout << endl;

    cout << "After append/add element-10, array is: " << endl;
    arr1.Append(10); // Append the element 10 to the array
    arr1.Display(); // Display the array
    cout << endl;

    cout << "After insert element-12 at index-0, array is: " << endl;
    arr1.Insert(0, 12); // Insert the element 12 at index 0
    arr1.Display(); // Display the array
    cout << endl;

    cout << "After delete element-4 at index-3. array is: " << endl;
    arr1.Delete(3); // delete the element 4 at index 3
    arr1.Display(); // Display the array
    cout << endl;

    return 0; // Return 0 to indicate successful execution
}
