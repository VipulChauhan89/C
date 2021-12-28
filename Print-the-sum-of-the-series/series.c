/*
    program to print the pattern 1/1^2 +1/3^2 -1/5^2 +1/7^2 ......N
*/
#include <stdio.h>
int main()
{
    int N,sign=1;
    float sum=1,i;
    printf("Enter the last limit : ");
    scanf("%d",&N);
    for(i=3;i<=N;i=i+2)
    {
        sum=sum+(sign*(1/(i*i)));
        sign*=-1;
    }
    printf("The sum is %6.2f\n",sum);
    return 0;
}
