/*
  Program to find the largest number among the N numbers entered by the user
*/
#include<stdio.h>
int main()
{
  int i,N,num,largest;
  printf("Enter the number of numbers you want to enter : ");
  scanf("%d",&N);
  printf("Enter %d numbers :\n",N);
  for(i=0;i<N;i++)
  {
    scanf("%d",&num);
    if(i==0)
    {
      largest=num;
    }
    else if(num>largest)
    {
      largest=num;
    }
  }
  printf("%d is the largest number.\n",largest);
  return 0;
}
