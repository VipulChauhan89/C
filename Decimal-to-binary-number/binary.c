//Program to convert a decimal number into binary number
#include<stdio.h>
int main()
{
    unsigned long long int deci,bin=0;
    int i=1,rem;
    printf("Enter the decimal number to convert it into binary number : ");
    scanf("%llu",&deci);
    while(deci!=0)
    {
        rem=deci%2;
        bin=bin+(rem*i);
        deci/=2;
        i*=10;
    }   
    printf("Binary number : %llu\n",bin);
    return 0;
}
