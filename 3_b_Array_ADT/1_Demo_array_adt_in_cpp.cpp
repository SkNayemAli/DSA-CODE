#include <iostream>
using namespace std;

struct Array
{
    int *A; // this is an integer type pointer
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    cout << endl
         << "Elements are: " << endl;
    for (i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
}
int main()
{
    struct Array arr;
    int n, i;
    cout << "Enter size of an array: ";
    cin >> arr.size;
    arr.A = new int[arr.size]; // making an array inside a heap and making pointer A
    arr.length = 0;
    cout << "Enter number of numbers: "; // means how many number you want in your array
    cin >> n;

    cout << "Enter all elements: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr.A[i];
    }
    arr.length = n;
    Display(arr);

    return 0;
}
