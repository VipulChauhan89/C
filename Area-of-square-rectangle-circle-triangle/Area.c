/*
  program to calculate the area of  circle , square , rectangle , triangle .
*/
#include<stdio.h>
void area_c(float r)//area of circle
{
    printf("Area of circle with radius %6.2f is = %6.2f\n",r,3.14*r*r);
}
void area_s(int s)//area of square
{
    printf("Area of square of side %d is = %d\n",s,s*s);
}
void area_r(int l,int b)//area of rectangle
{
    printf("Area of rectangle of length %d and breadth %d = %d\n",l,b,l*b);
}
void area_t(float bs,float h)//area of triangle
{
    printf("Area of triangle of base %6.2f and height %6.2f = %6.2f\n",bs,h,(bs*h)/2);
}
int main()
{
    int s,l,b;
    float r,bs,h;
    int ch;
    printf("Enter\n1-To find the area of circle\n2-To find the area of square\n3-To find the area of rectangle\n4-To find the area of triangle\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("Enter the radius of the circle : ");
            scanf("%f",&r);
            area_c(r);
            break;
        case 2:
            printf("Enter the side of the square : ");
            scanf("%d",&s);
            area_s(s);
            break;
        case 3:
            printf("Enter the length of the rectangle : ");
            scanf("%d",&l);
            printf("Enter the breadth of the rectangle : ");
            scanf("%d",&b);
            area_r(l,b);
            break;
        case 4:
            printf("Enter the base of the triangle : ");
            scanf("%f",&bs);
            printf("Enter the height of th triangle : ");
            scanf("%f",&h);
            area_t(bs,h);
            break;
        default:
            printf("You entered the wrong choice .");
    }
  return 0;
}
