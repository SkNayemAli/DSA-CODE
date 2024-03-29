#include <stdio.h>

void Insert(int A[],int n)
{
    int i=n,temp;
    temp=A[i];
    
    while(i>1 && temp>A[i/2])
    {
    A[i]=A[i/2];
    i=i/2;
    }
    A[i]=temp;
}


int Delete(int A[],int n)
{
    int i,j,x,temp,val;
    val=A[1];
    x=A[n];
    A[1]=A[n];
    
    A[n]=val;
    
    i=1;j=i*2;
    
    while(j<n-1)
    {
        if(A[j+1]>A[j])
        j=j+1;
        if(A[i]<A[j])
    {
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
        i=j;
        j=2*j;
    }
        else
            break;
    }
    return val;
}


int main()
{
    int H[]={0,10,20,30,25,5,40,35};
    // 40,25,35,10,5,20,30
    
    int i;
    
    //insert element....
    printf("\nAfter insertion: \n");
    for(i=2;i<=7;i++)
    Insert(H,i);

    for(i=1;i<=7;i++)
    printf("%d ",H[i]);
    printf("\n\n");

    //delete element ...
    printf("Deleted value is: %d\n\n",Delete(H,7));
    printf("After deletion: \n");
    for(i=1;i<=6;i++) // here i<=6 because we after deletion one element is decreasing(the element is 40)
    printf("%d ",H[i]);
    printf("\n\n");
    

    //Use deleting function..
    for(i=7;i>1;i--)
    {
        Delete(H,i);
    }
    
    
    //After insertion and deletion the heap is sorted..
    printf("After deletion funtion it will be sorted: \n");
    for(i=1;i<=7;i++)
    printf("%d ",H[i]);
    printf("\n\n");
    return 0;
}