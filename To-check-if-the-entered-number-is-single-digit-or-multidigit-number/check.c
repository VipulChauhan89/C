/*
  Program to check if the entered number is single digit or multidigit number
*/
#include<stdio.h>
int main()
{
  int num;
  printf("Enter the number : ");
  scanf("%d",&num);
  if(num>=-9 && num<=9)
  {
    printf("%d is the single digit number\n",num);
  }
  else
  {
    printf("%d is the multi digit number\n",num);
  }
  return 0;
}
