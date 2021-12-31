/*
    Program to print the pattern by accepting the value of N from the user
    
    pattern is
    1 
    2 2 
    3 3 3 
    4 4 4 4
    5 5 5 5 5
*/
#include<stdio.h>
int main()
{
    int i,j,N;
    printf("Enter the limit upto which you want to print the pattern : ");
    scanf("%d",&N);
    printf("pattern is\n\n");
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
