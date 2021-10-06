#include <stdio.h>
#include <stdlib.h>
//Recursive function to return 0 if number is prime and return 1 if the number is not prime
int isPrime(int n,int i)
{
   if(i==1)
        return 0;
   else
   {
       if(n%i==0)
        return 1;
       else
        isPrime(n,i-1);
   }
}
int main()
{
    int n,i,prime;
    printf("Enter the number\n");
    scanf("%d",&n);
    i=n-1;
    prime=isPrime(n,i);
    if(prime==1)
    {
        printf("%d is not a prime number",n);
    }
    else
    {
        printf("%d is a prime number",n);
    }
    return 0;
}
