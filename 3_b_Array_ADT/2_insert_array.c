// Inserting and Appending in a Array
#include <stdio.h>
struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    // printf(" Elements are:\n");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}

void Append(struct Array *arr, int x)
{ // append means interting/adding new element at the end of the array

    if (arr->length < arr->size) // "->" this arrow opertor is use for accessing data
        arr->A[arr->length++] = x;
}

void Insert(struct Array *arr, int index, int x)
{
    int i;
    if (index >= 0 && index <= arr->length)
    {
        for (i = arr->length; i > index; i--)
            arr->A[i] = arr->A[i - 1];
        arr->A[index] = x;
        arr->length++;
    }
}

void Delete(struct Array *arr, int index)
{
    int i;
    if (index >= 0 && index <= arr->length){
        for (i = index; i < arr->length - 1; i++){
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
    }
}

int main()
{
    struct Array arr1 = {{2, 3, 4, 5, 6}, 10, 5}; // 10 is initializes the length member of the structure and 5 is initializes the size member of the structure.

    printf("\nBefore do any operation the array is: \n");
    Display(arr1);
    printf("\n");
    printf("\n");

    printf("After append/add 10, array is: \n");
    Append(&arr1, 10);
    Display(arr1);
    printf("\n");


    printf("\nAfter insert 12 at 0-index, array is: \n");
    Insert(&arr1, 0, 12);
    Display(arr1);
    printf("\n");

    printf("\nAfter delete index-3(element-4), array is: \n");
    Delete(&arr1,3);
    Display(arr1);
    printf("\n");
    printf("\n");
    
    return 0;
}