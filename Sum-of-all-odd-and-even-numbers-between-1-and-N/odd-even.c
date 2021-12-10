/*
  Program to find the sum of all odd and even numbers between 1 to N
*/
#include<stdio.h>
int main()
{
  int i,N;
  long int sum_even=0,sum_odd=0;
  printf("Enter the limit upto which you want to find the sum of odd and even numbers : ");
  scanf("%d",&N);
  for(i=1;i<=N;i++)
  {
    if(i%2==0)
    {
      sum_even+=i;
    }
    else
    {
      sum_odd+=i;
    }
  }
  printf("Sum of odd numbers is : %ld\n",sum_odd);
  printf("Sum of even numbers is : %ld\n",sum_even);
  return 0;
}
