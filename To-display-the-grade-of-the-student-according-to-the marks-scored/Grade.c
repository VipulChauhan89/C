/*
  Program to display the grade of the student according to the marks scored by the student.
  
  percentage>=80 then Grade A
  percentage>=60 and percentage<80 then Grade B
  percentage>=50 and percentage<60 then Grade C
  percentage>=40 and percentage<50 then Grade D
  percentage>=35 and percentage<40 then Grade E
  percentage<35 then Grade F
*/
#include<stdio.h>
int main()
{
  int n;
  printf("Enter the number of subject of which you want to enter marks : ");
  scanf("%d",&n);
  float marks[n],sum=0,percentage;
  printf("Enter the marks in %d subjects :\n");
  for(int i=0;i<n;i++)
  {
    scanf("%f",&marks[i]);
    sum+=marks[i];
  }
  percentage=sum/n;
  if(percentage>=80)
  {
    printf("Grade A.\n");
  }
  else if(percentage>=60 && percentage<80)
  {
    printf("Grade B.\n");
  }
  else if(percentage>=50 && percentage<60)
  {
    printf("Grade C.\n");
  }
  else if(percentage>=40 && percentage<50)
  {
    printf("Grade D.\n");
  }
  else if(percentage>=35 && percentage<40)
  {
    printf("Grade E.\n");
  }
  else if(percentage<35)
  {
    printf("Grade F.\n");
  }
  else
  {
    printf("Not a valid percentage.\n");
  }
  return 0;
}
