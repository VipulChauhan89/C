#include <stdio.h>
int revDigit(int x)
{
    int rem;
    if (x==0)
    {
        return 0;
    }
    else
        {
            rem=x%10;
            printf("%d",rem);
            revDigit(x/10);
        }
}
int main()
{
    int num;
    printf("Enter the number to find out the reverse of number\n");
    scanf("%d",&num);
    if(num>999 && num<=9999)
        {
            printf("The reverse of a number is\n" );
            revDigit(num);
        }

    else
    {
            printf("Not a four digit number");
    }
    return 0;
}
