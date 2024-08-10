#include<stdio.h>
#include<stdlib.h>

struct  Array
{
    int *A; //this is an integer type pointer
    int size;
    int length;
};

void Display(struct Array arr){
    int i;
    printf("\nElements are:\n");
    for ( i = 0; i < arr.length; i++){
        printf("%d ",arr.A[i]);
    }
}
int main(){
    struct Array arr;
    int n,i;
    printf("Enter size of an array: ");
    scanf("%d",&arr.size);
    arr.A=(int*)malloc(arr.size*sizeof(int)); //making an array inside a heap and making pointer A
    arr.length=0;
    printf("Enter number of numbers: ");// means how many number you want in your array
    scanf("%d",&n);

    printf("Enter all elements: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr.A[i]);
    }
    arr.length = n;
    Display(arr);

    return 0;
}
