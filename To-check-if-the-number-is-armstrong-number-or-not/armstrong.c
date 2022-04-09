/*
  Program to check if the number is armstrong number or not
*/
#include<stdio.h>
int main()
{
  int num,temp,sum=0,s;
  printf("Enter the number : ");
  scanf("%d",&num);
  if(num>=100 && num<=999)
  {
    temp=num;
    while(temp!=0)
    {
      s=temp%10;
      sum=sum+(s*s*s);
      temp=temp/10;
    }
    if(sum==num)
    {
      printf("%d is an armstrong number.\n",num);
    }
    else
    {
      printf("%d is not an armstrong number.\n",num);
    }
  }
  else
  {
    printf("It is not a three digit number.\n");
  }
  return 0;
}
