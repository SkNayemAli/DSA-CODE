#include <stdio.h>
 #include <stdlib.h>
 int main()
 {
    int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}}; // 3 is row and 4 is col 
    
    int *B[3]; // here B is an integer pointer and 3 is for row
    int **C; // here C is an integer double pointer
    int i,j;

    // let print the array A[]
    printf("\nArray A is: \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
        
    }

    printf("\n\n");


    B[0]=(int *)malloc(4*sizeof(int)); // 4 is for column and this malloc funtion is use for new allocate in the heap
    B[1]=(int *)malloc(4*sizeof(int));
    B[2]=(int *)malloc(4*sizeof(int));


    // let print the array B[]
    printf("\nArray B is: \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
        
    }
    // this will give the output as garbage values cause we are not initialize the array values
    printf("\n\n");
    
    
    C=(int **)malloc(3*sizeof(int *)); // 3 is for row 
    C[0]=(int *)malloc(4*sizeof(int));
    C[1]=(int *)malloc(4*sizeof(int));
    C[2]=(int *)malloc(4*sizeof(int));

    // let print the array B[]
    printf("\nArray C is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
            printf("%d ",C[i][j]);
        printf("\n");
    }
    printf("\n");
    // this will give the output as garbage values cause we are not initialize the array values
    return 0;
 }