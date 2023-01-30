//WAP to replace every element of an array with its next greater element

#include <stdio.h>

void main()
{
    int n;
    printf("Enter the value of n \n");
    scanf("%d",&n);

    int a[n];
    int b[n];

    printf("Enter the elements of array a \n");

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<n;i++)
        b[i]=a[i];

    for (int i = 0; i < n-1; i++)
        {
            int min = i;
            for (int j = i+1; j < n; j++)
                if (b[j] < b[min])
                    min = j;

            int temp = b[min];
            b[min] = b[i];
            b[i] = temp;

        }

    printf("After replacing the elements with it next greater element the following array is \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
                {
                    if(j<n-1)
                        printf("%d  ",b[j+1]);
                    else
                        printf("-1 ");
                }
        }
    }
}