/*
    Program to check if the number entered by the user is present in the fibonacci series or not
*/
#include<stdio.h>
#include<stdbool.h>
bool check(unsigned long long int x)
{
    unsigned long long int t1=0,t2=1,nextTerm=0;
    while(nextTerm<=x)
    {
        if(nextTerm==x)
        {
            return true;
        }
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    return false;
}
int main()
{
    unsigned long long num;
    printf("Enter the number to find out whether it exist in fibonacci series or not : ");
    scanf("%llu",&num);
    if(check(num))
    {
        printf("%llu is present in the fibonacci series\n",num);
    }
    else
    {
        printf("%llu is not present in the fibonacci series\n",num);
    }
    return 0;
}
