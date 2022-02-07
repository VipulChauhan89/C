/*
  Program to calculate the permutation by providing total number of objects and number of objects selected as an input
  only applicable for small values of n and r
*/
#include<stdio.h>
unsigned long long int factorial(unsigned long long int n)
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
    unsigned long long int nPr;
    printf("Enter the total number of objects : ");
    scanf("%d",&n);
    printf("Enter the number of objects you want to select : ");
    scanf("%d",&r);
    nPr=factorial(n)/factorial(n-r);
    printf("The Permutation is = %llu\n",nPr);
    return 0;
}
