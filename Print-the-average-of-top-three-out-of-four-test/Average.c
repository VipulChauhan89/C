/*
  Program to print the average of top three out of four test
*/
#include<stdio.h>
int main()
{
  float m1,m2,m3,m4,sum=0,average,min;
  printf("Enter the marks in four test : ");
  scanf("%f%f%f%f",&m1,&m2,&m3,&m4);
  min=m1;
  if(m2<min)
  {
    min=m2;
  }
  if(m3<min)
  {
    min=m3;
  }
  if(m4<min)
  {
    min=m4;
  }
  sum=m1+m2+m3+m4-min;
  average=sum/3;
  printf("The average of top three subjects is = %.2f\n",average);
}
