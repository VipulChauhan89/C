/*
  program to compute the net salary of the employ by entering percentage of HRA,TA,DA.
*/
#include<stdio.h>
#define MAX 30
int main()
{
  double Basic_pay,Net_salary,Hra,Ta,Da,Hra_percent,Ta_percent,Da_percent;
  char name[MAX];
  printf("Enter the name of the employ :");
  fgets(name,MAX,stdin);
  printf("Enter the basic pay of the employ :");
  scanf("%lf",&Basic_pay);
  printf("Enter the HRA percentage :");
  scanf("%lf",&Hra_percent);
  printf("Enter the TA percentage :");
  scanf("%lf",&Ta_percent);
  printf("Enter the DA percentage :");
  scanf("%lf",&Da_percent);
  Hra=(Hra_percent*Basic_pay)/100;
  Ta=(Ta_percent*Basic_pay)/100;
  Da=(Da_percent*Basic_pay)/100;
  Net_salary=Basic_pay+Hra+Ta+Da;
  printf("The name of the employ is %s",name);
  printf("Net salary of the employ is = %.2lf rupees .",Net_salary);
  return 0;
}
