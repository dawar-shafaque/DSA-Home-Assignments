#include<stdio.h>
int main()
{
    int n;
    printf("Length of array is : ");
    scanf("%d",&n);
    int a[n];
    int b[n];
    printf("Enter the elements of the array : ");
    int i;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    b[0] = a[1];
    for ( i = 0; i < n; i++)
    {
        if (i>0 && i<n)
        {
            b[i] = a[i-1] * a[i+1];            
        }
        if (i<n && (i+1) == n)
        {
            b [i] = a[i-1];
        }
        
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",b[i]);
    }
    return 0;
}