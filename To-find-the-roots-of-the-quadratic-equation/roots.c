//Program to find the roots of the quadratic equation
#include <stdio.h>
#include <math.h>

int main() 
{
    printf("Enter the three coefficients of the quadratic equation : ");
	double A,B,C;
	scanf("%lf%lf%lf",&A,&B,&C);
	printf("%.6f\n",(-B+sqrt(B*B-4*A*C))/(2*A));
	printf("%.6f\n",(-B-sqrt(B*B-4*A*C))/(2*A));
	return 0;
}