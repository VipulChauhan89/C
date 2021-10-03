#include <stdio.h>
#include <stdlib.h>
//Recursion function to return the factorial of a number
long long int factorial(int x)
{
    if(x==1)
        return 1;
    else
        return x*factorial(x-1);
}
int main()
{
    int num;
    printf("Enter the number to find its factorial\n");
    scanf("%d",&num);
    printf("The factorial of number %d = %lld\n",num,factorial(num));
    return 0;
}
