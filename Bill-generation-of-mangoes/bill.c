/*
  Program to calculate the bill for mangoes 
  If the customer is known for more than 3 years and the bill is more than 600 than discount of 12% is given
  and if the customer is known for more than 3 years but the bill is less than 600 than discount of 7% is given
*/
#include<stdio.h>
float total_bill(float a,int b)
{
    if(b>3 && a>600)
    {
        return (a*88)/100.0;
    }
    else if(b>3 && a<=600)
    {
        return (a*93)/100.0;
    }
    else
    {
        return a;
    }
}
int main()
{
    float bill;
    int year;
    printf("Enter the bill amount : ");
    scanf("%f",&bill);
    printf("Enter the number of year he is known to the seller : ");
    scanf("%d",&year);
    printf("The total bill is = %6.2f\n",total_bill(bill,year));
    return 0;
}
