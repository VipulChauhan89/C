/*
  accept two numbers from the user and add the number and print their sum
*/
#include<stdio.h>
//function to add two numbers and return their sum
int add(int a,int b)
{
  int sum=0;
  sum=a+b;
  return sum;
}
int main()
{
  int a,b;
  printf("Enter the first number : ");
  scanf("%d",&a);
  printf("Enter the second number : ");
  scanf("%d",&b);
  printf("%d + %d = %d",a,b,add(a,b));
  return 0;
}
