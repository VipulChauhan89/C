/*
  program to take the length, breadth, round of fencing and cost of fencing of the farm from the user and then print the total cost of fencing the farm with wire.
*/

#include<stdio.h>
int main()
{
  float length,breadth,parameter,rounds,total_length,cost,total_cost;
  printf("Enter the length of the farm in meters :");
  scanf("%f",&length);
  printf("Enter the breadth of the farm in meters :");
  scanf("%f",&breadth);
  printf("Enter the number of times you want to fence the farm :");
  scanf("%f",&rounds);
  printf("Enter the cost of fencing in rupees per meter :");
  scanf("%f",&cost);
  parameter=2*(length+breadth);
  total_length=rounds*parameter;
  total_cost=cost*total_length;
  printf("\nThe parameter of the farm is %.2f meters\n",parameter);
  printf("Total wire required to fence the farm  %.2f times is %.2f meters\n",rounds,total_length);
  printf("Total cost of fencing the farm is %.2f rupees\n",total_cost);
  return 0;
}
