/*
  Program to calculate the combination by providing total number of objects and total number of choosing objects
  only applicable for small values of n and r
*/
#include<stdio.h>
long double factorial(long double n)
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
    int n,r;
    long double nCr;
    printf("Enter the total number of objects : ");
    scanf("%d",&n);
    printf("Enter the number of objects you want to choose : ");
    scanf("%d",&r);
    nCr=factorial(n)/(factorial(n-r)*factorial(r));
    printf("The Combination is = %.2Lf\n",nCr);
    return 0;
}
