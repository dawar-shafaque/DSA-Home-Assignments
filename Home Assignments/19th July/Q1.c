//WAP to find the second smallest and second largest element of an array 
#include<stdio.h> 
int main()
{
    int a[10],b[10],i,j,count=0; 
    printf("Enter the elements of an array:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    } 
    printf("\n");
    printf("The array elements are:\n"); 
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    } 
    printf("\n");
    for(i=0;i<10;i++)
    {   
        count=0;
        for(j=i+1;j<10;j++)
        {
            if (a[j] < a[i])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        } 
    } 
    printf("Second smallest number is : %d\n",a[1]);
    printf("Second largest number is : %d",a[8]); 
    return 0;
}