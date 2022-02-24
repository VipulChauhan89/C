/*
    Program to find out the sum of N natural numbers using recursion
*/
#include <stdio.h>
#include <stdlib.h>
int sum(int n)
{
    if(n==1)
        return 1;
    else
        return n+sum(n-1);
}
int main()
{
    int N;
    printf("Enter the limit upto which we have to find out sum\n");
    scanf("%d",&N);
    printf("Sum is = %d \n",sum(N));
    return 0;
}
