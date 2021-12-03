/*
  Program to check if the entered number is positive negative or zero
*/
#include<stdio.h>
int main()
{
  int num;
  printf("Enter the number : ");
  scanf("%d",&num);
  if(num==0)
  {
    printf("The entered number is zero.\n");
  }
  else if(num<0)
  {
    printf("%d is the negative number.\n",num);
  }
  else
  {
    printf("%d is the positive number.\n",num);
  }
  return 0;
}
