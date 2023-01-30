//WAP to Find Largest Element in an Array using Recursion



#include <stdio.h>
#include <stdlib.h>

void input(int *p,int n)
{
     for(int i=0;i<n;i++)
    {
            scanf("%d",&p[i]);
        
    }   
}

int large(int *p,int n,int b)
{
    if(n<0)
        return b;
    else
    {
        if(b < *p)
            b = *p;
        large(++p,--n,b);
    }
}



void main()
{
    int n;
    int *arr;

    printf("Enter the length of array ");
    scanf("%d",&n);
    arr=(int *) malloc((n) * sizeof(int));
    printf("Enter the elements of the array \n");
    input(arr,n);
    printf("The largest element of the array is %d \n",large(arr,n-1,arr[0]));
}