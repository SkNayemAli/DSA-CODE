#include <iostream>
using namespace std;
/*Here is the C++ version of your provided C code. It uses new for dynamic memory allocation instead of malloc.*/
int main() {
    int A[5] = {2, 4, 6, 8, 10};
    int *p;
    int i;

    p = new int[5];
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    cout << "\nArray A is: ";
    for (i = 0; i < 5; i++) {
        cout << A[i] << " ";
    }
    cout << "\n\n";

    cout << "Pointer p is: ";
    for (i = 0; i < 5; i++) {
        cout << p[i] << " ";
    }
    cout << "\n\n";

    delete[] p; // Free/ delete the allocated memory

    return 0;
}
