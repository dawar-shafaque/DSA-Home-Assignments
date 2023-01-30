//WAP to print all permutations of a given string using pointers.

#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) 
{ 
    char temp; 
    temp = *x; 
    *x = *y; 
    *y = temp; 
}

void permute(char *a, int l, int r) 
{ 
int i; 
if (l == r) 
    printf("%s\n", a); 
else
{ 
    for (i = l; i <= r; i++) 
    { 
        swap((a+l), (a+i)); 
        permute(a, l+1, r); 
        swap((a+l), (a+i)); 
    } 
} 
}

void main()
{
    char s[100];

    printf("Enter a string \n");
    gets(s);
    int n=strlen(s);
    printf("Possible permutations of strings are \n");
    permute(s,0,n-1);
}