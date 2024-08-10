#include <stdio.h>

struct Array {
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr) {
    int i;
    printf("Array is: \n");
    for (i = 0; i < arr.length; i++) {
        printf("%d ", arr.A[i]);
    }
    printf("\n\n");
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(struct Array *arr, int key) {
    int i;
    for (i = 0; i < arr->length; i++) {
        if (key == arr->A[i]) {
            // swap(&arr->A[i], &arr->A[i-1]); // transposition
            // swap(&arr->A[i], &arr->A[0]); // move to first index or head
            return i; // return the index of the found element
        }
    }
    return -1; // return -1 if the element is not found
}

int Operation(struct Array *arr, int key){
    int i;
     for (i = 0; i < arr->length; i++) {
        if (key == arr->A[i]) {
            swap(&arr->A[i], &arr->A[i-1]); // transposition
            // swap(&arr->A[i], &arr->A[0]); // move to first index or head
            return i; // return the index of the found element
        }
    }
    return -1; // return -1 if the element is not found
    
}

int main() {
    struct Array arr1 = {{2, 23, 14, 5, 6, 9, 8, 12}, 10, 8};
    int index = LinearSearch(&arr1, 5);
    if (index != -1) {
        printf("\nElement is found at index: %d\n\n", index);
    } else {
        printf("\nElement not found\n");
    }
    Display(arr1);

    Operation(&arr1,5);
    printf("After transposition operation the ");
    Display(arr1);

    return 0;
}
