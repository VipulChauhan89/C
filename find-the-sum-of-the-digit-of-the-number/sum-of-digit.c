/*
  Program to find the sum of the digit of the number.
*/
#include<stdio.h>
int main()
{
  int num,sum=0,s;
  printf("Enter the number : ");
  scanf("%d",&num);
  while(num>0)
  {
    s=num%10;
    sum+=s;
    num/=10;
  }
  printf("The sum of digit is = %d\n",sum);
  return 0;
}
