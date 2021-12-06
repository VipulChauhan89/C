/*
  Program to find the minimum out of three numbers 
*/
#include<stdio.h>
int main()
{
  int n1,n2,n3,min;
  printf("Enter three numbers to find the minimum out of three numbers : ");
  scanf("%d%d%d",&n1,&n2,&n3);
  min=n1;
  if(n2<min)
  {
    min=n2;
  }
  if(n3<min)
  {
    min=n3;
  }
  printf("The minimum number is = %d\n",min);
  return 0;
}
