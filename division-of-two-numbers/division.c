/*
  program to take two numbers from the user and perform the division by taking numerator as integer and denominator as float
*/
#include<stdio.h>
int main()
{
  int num;
  float den,quotient=0;
  printf("Enter the numerator in integer : ");
  scanf("%d",&num);
  printf("Enter the denominator in integer plus decimal : ");
  scanf("%f",&den);
  quotient=num/den;
  printf("The quotient of the division is = %.2f\n",quotient);
  return 0;
}
