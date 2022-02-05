/*
  program to find the maximum among four number by desigining a function BIG which takes two numbers as parameter and return maximum among them
  */
#include<stdio.h>
int BIG(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int a,b,c,d;
    printf("Enter four  numbers : ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("The maximum number is = %d\n",BIG(a,BIG(b,BIG(c,d))));
    return 0;
}
