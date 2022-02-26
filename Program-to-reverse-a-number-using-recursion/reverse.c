/*
    Program to reverse the digits of the number using recursion
*/
#include<stdio.h>
unsigned long long int revDigit(unsigned long long int n,unsigned long long int rev)
{
    if(n==0)
    {
        return rev;
    } 
    else
    {
        return revDigit(n/10,rev*10+n%10);
    }
}
int main()
{
    unsigned long long int num,rev=0;
    printf("Enter the number to reverse it : ");
    scanf("%llu",&num);
    printf("Reverse of the number %llu is = %llu\n",num,revDigit(num,rev));
    return 0;
}
