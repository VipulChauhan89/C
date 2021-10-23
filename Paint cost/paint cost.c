/*
  program to calculate the area of rectangle in meter square and then find the paint cost to paint the rectangle.  
*/
#include<stdio.h>
int main()
{
  int length,breadth,area,cost,totalcost;
  printf("Enter the length of the rectangle in meters :");
  scanf("%d",&length);
  printf("Enter the breadth of the rectangle in meters :");
  scanf("%d",&breadth);
  area=length*breadth;
  printf("Enter the cost of paint per square meters in rupees :");
  scanf("%d",&cost);
  totalcost=cost*area;
  printf("The area of rectangle is %d meter square and the total cost of paint that is required to paint the rectangle is %d rupees\n",area,totalcost);
  return 0;
}
