/*
  program to convert temperature from degree faherenheit to degree celsius
*/
#include<stdio.h>
int main()
{
  float fh,cl;
  printf("Enter the temperature in degree fahrenheit :");
  scanf("%f",&fh);
  cl=(fh-32)*(5.0/9.0);
  printf("The temperature in degree celsius is %.2f \n",cl);
  return 0;
}
