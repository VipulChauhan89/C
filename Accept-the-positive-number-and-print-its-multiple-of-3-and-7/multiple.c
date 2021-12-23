/*
  Program to accept the positive number and print its multiple of 3 and 7.
*/
#include<stdio.h>
int main()
{
  int num;
  printf("Enter the number : ");
  scanf("%d",&num);
  if(num<0)
  {
    printf("You entered the negative number .\n");
  }
  else
  {
    printf("Multiple of three of number %d is = %d\n",num,num*3);
    printf("Multiple of seven of number %d is = %d\n",num,num*7);
  }
  return 0;
}
