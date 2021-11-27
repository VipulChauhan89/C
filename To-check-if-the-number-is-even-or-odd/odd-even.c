/*
  program to check if the entered number is even or odd
*/
#include<stdio.h>
int main()
{
  int num;
  printf("Enter the number : ");
  scanf("%d",&num);
  (num%2==0)?printf("%d is an even number.\n",num):printf("%d is an odd number.\n",num);
  return 0;
}
