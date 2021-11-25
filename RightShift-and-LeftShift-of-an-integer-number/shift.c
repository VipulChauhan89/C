/*
  Program to rightshift and leftshift of an integer number
*/
#include<stdio.h>
int main()
{
  int num,ls=0,rs=0,s;
  printf("Enter the number : ");
  scanf("%d",&num);
  printf("Enter how many bits you want to shift : ");
  scanf("%d",&s);
  rs=num>>s;
  ls=num<<s;
  printf("Number = %d \nRightshift = %d \nLeftshift = %d\n",num,rs,ls);
  return 0;
}
