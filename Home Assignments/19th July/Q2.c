#include <stdio.h>
int main()
{
int n,i,temp,j;
printf("Enter size of array:");
scanf("%d",&n);
int a[n]; 
printf("Enter elements :");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if((a[j]%2!=0)&&(a[j+1]%2==0))
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("New array\n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
} 