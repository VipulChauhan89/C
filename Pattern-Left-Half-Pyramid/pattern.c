/*
    Program to print the pattern of Left half pyramid
    * 
    * *
    * * *
    * * * *
    * * * * *
*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the value of n to print the pattern : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j<=i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
