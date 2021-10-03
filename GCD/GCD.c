#include <stdio.h>
#include <stdlib.h>
//Function to return GCD of two numbers
int gcd(int n1,int n2)
{
    if(n2 == 0)
        return n1;
    else
        return gcd(n2,n1%n2);
}
int main()
{
    int n1,n2;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    printf("The GCD of %d and %d = %d ",n1,n2,gcd(n1,n2));
    return 0;
}
