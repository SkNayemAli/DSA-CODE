#include <iostream>
using namespace std;
int main()
{
    int A[3][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {1, 3, 5, 7}}; // 3 is row and 4 is col

   
    
    int i, j;

    // let print the array A[]
    cout << "\nArray A is: \n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout <<A[i][j];
            cout<<" ";
        }
        cout << endl;
    }

    cout << endl;
        


    int *B[3]; // here B is an integer pointer and 3 is for row
    B[0] = new int [4]; // 4 is for column and this malloc funtion is use for new allocate in the heap
    B[1] = new int [4];
    B[2] = new int [4];

    // let print the array B[]
    cout << "\nArray B is: \n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << B[i][j];
            cout<<" ";
        }
        cout << endl;
    }
    cout << endl;
    // this will give the output as garbage values cause we are not initialize the array values


    int **C;   // here C is an integer double pointer
    C = new int *[3]; // 3 is for row
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4];

    // let print the array C[]
    cout << "\nArray C is: \n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++){
            cout << C[i][j];
            cout<<" ";
        }
        cout << endl;
    }
    cout << endl;
    // this will give the output as garbage values cause we are not initialize the array values
    return 0;
}