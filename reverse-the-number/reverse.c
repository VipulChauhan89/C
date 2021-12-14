/*
  Program to reverse the number entered by the user
*/
#include<stdio.h>
int main()
{
  int num,temp,rem,reverse=0;
  printf("Enter the number : ");
  scanf("%d",&num);
  temp=num;
  while(temp!=0)
  {
    rem=temp%10;
    reverse=reverse*10+rem;
    temp/=10;
  }
  printf("The reverse of the number %d is = %d\n",num,reverse);
  return 0;
}
