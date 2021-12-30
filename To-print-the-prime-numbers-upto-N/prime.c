/*
    Program to print the prime numbers upto N
*/
#include<stdio.h>
int main()
{
    int i,j,N,c;
    printf("Enter the number till which you want to print the prime number : ");
    scanf("%d",&N);
    printf("Prime numbers are : ");
    for(i=2;i<=N;i++)
    {
        c=0;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
