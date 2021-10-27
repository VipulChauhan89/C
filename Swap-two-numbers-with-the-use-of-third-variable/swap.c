/*
  program to swapp two number with the use of third variable
*/
#include<stdio.h>
void swap(int *a,int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}
int main()
{
  int a,b,temp;
  printf("Enter the value in a :");
  scanf("%d",&a);
  printf("Enter the value in b :");
  scanf("%d",&b);
  printf("Values before swapp:\na = %d\nb = %d\n",a,b);
  swap(&a,&b);
  printf("Values after swapp:\na = %d\nb = %d\n",a,b);
  return 0;
}
