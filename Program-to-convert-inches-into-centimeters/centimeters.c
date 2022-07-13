/*
  Program to convert inches into centimeters.
*/
#include<stdio.h>
int main()
{
    double inch,cm;
    printf("Enter the Inches to convert it into Centimeter : ");
    scanf("%lf",&inch);
    cm=2.54*inch;
    printf("Centimeters = %0.2lf\n",cm);
    return 0;
}
