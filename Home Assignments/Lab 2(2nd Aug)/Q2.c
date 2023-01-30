/*WAP to arrange the elements of an array such that all even numbers are followed by all odd numbers*/


#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n,*a;
    printf("Enter the value of n \n");
    scanf("%d",&n);

    a=(int *)malloc(n * sizeof(int));

    printf("Enter the elements of array a \n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (int i = 0; i < n-1; i++)
    {
        int min_idx = i;
        for (int j = i+1; j < n; j++)
            if (a[j] < a[min_idx])
                min_idx = j;
        int temp = a[min_idx];
        a[min_idx] = a[i];
        a[i] = temp;
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[j]%2==0 && a[i]%2!=0)
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
                 break;
             }
        }
    }

    printf("The sorted array is \n");
    for( int i=0;i<n;i++)
        printf("%d ",a[i]);
}