/*
  Program to find the factorial of the number
*/
#include<stdio.h>
int main()
{
  int num;
  long long int factorial=1;
  printf("Enter the number to find its factorial : ");
  scanf("%d",&num);
  for(int i=2;i<=num;i++)
  {
    factorial*=i;
  }
  printf("Factorial of number %d is = %lld\n",num,factorial);
  return 0;
}
