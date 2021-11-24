/*
  To find the area of the triangle
*/
#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c;
  float s,area;
  printf("Enter the sides of the triangle : ");
  scanf("%d%d%d",&a,&b,&c);
  if(a+b>c && b+c>a && c+a>b)
  {
    s=(a+b+c)/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is = %.2f\n",area);
  }
  else
  {
    printf("Enter triangle is invalid.\n");
  }
  return 0;
}
