//Program to find the sum and difference of integer and float numbers
#include <stdio.h>
int main()
{
	int a,b;
    float c,d;
    printf("Enter two integer numbers : ");
    scanf("%d%d",&a,&b);
    printf("Enter two float numbers : ");
    scanf("%f%f",&c,&d);
    printf("%d+%d = %d \n%d-%d = %d\n",a,b,a+b,a,b,a-b);
    printf("%.1f+%.1f = %.1f \n%.1f-%.1f = %.1f\n",c,d,c+d,c,d,c-d);
    return 0;
}
