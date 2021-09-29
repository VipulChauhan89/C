#include<stdio.h>
//Program to segregate the binary number
int main()
{
    int n,m,rem,new = 0;
    printf("Enter a Number : ");
    scanf("%d",&n);
    m = n;
    while(m != 0)
    {
        rem = m%10;
        if(rem == 1)
            new = new*10 + rem;
        m /= 10;
    }
    m = n;
    while(m != 0)
    {
        rem = m%10;
        if(rem == 0)
            new = new*10 + rem;
            m /= 10;
    }
    printf("New Number : %d",new);
    return 0;
}
