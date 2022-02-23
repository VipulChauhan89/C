/*
    Program to print the sum of series
    1 - 2/2! + 3/3! - 4/4! + ......Nth term
*/
#include<stdio.h>
double factorial(int n)
{
    if(n==1)
    {
        return n;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main()
{
    int N,i,sign=-1;
    double sum=1;
    printf("Enter the Limit upto which you want o find out the sum of the series : ");
    scanf("%d",&N);
    for(i=2;i<=N;i++)
    {
        sum=sum+((i/factorial(i))*sign);
        sign*=-1;
    }
    printf("Sum of the series is = %lf\n",sum);
    return 0;
}
