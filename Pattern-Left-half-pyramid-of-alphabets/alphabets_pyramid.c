/*
    Program to print left half pyramid of Alphabets 
    A
    B B
    C C C
    D D D D
    E E E E E
*/
#include<stdio.h>
#include<ctype.h>
int main()
{
    int i,j,n;
    char c,d='A';
    printf("Enter the alphabet upto which you want to print the left half pyramid :");
    scanf("%c",&c);
    if((c>=65 && c<=90) ||(c>=97 && c<=122))
    {
        n=toupper(c)%64;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(j<=i)
                {
                    printf("%c ",d);
                }
            }
            printf("\n");
            d++;
        }
    }
    else
    {
        printf("The entered character is not an alphabet\n");
    }
    return 0;
}
