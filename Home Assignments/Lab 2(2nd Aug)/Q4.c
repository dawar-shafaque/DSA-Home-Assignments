//WAP to find determminant of a 3x3 matrix 
#include<stdio.h>
int main()
{
    int a[3][3],i,j,det;
    printf("Enter the elements of the matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    det=a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])-a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])+a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
    printf("Determinant of the matrix is %d",det); 
    return 0;
}