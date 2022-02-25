/*
    Program to find the sum of the digits of the number using recursion
*/
#include <stdio.h>
#include <stdlib.h>
//Function to return the sum of the digits using recursion
int sumofdigit(int x)
{
    if (x==0)
        return 0;
    else
        return x%10 + sumofdigit(x/10);
}
int main()
{
    int num;
    printf("Enter the digit to find out the sum of digit\n");
    scanf("%d",&num);
    printf("Sum of digit of number %d = %d",num,sumofdigit(num));
    return 0;
}
