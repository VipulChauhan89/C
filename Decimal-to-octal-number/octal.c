//Program to convert the positive decimal number into octal number
#include<stdio.h>
unsigned long long int toOctal(unsigned long long int num)
{
    unsigned long long int octal=0;
    int rem,i=1;
    while(num!=0)
    {
        rem=num%8;
        octal=octal+rem*i;
        num/=8;
        i*=10;
    }
    return octal;
}
int main()
{
    unsigned long long int num;
    printf("Enter the decimal number to convert it into octal number : ");
    scanf("%llu",&num);
    printf("Octal number : %llu\n",toOctal(num));
    return 0;
}
