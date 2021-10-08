#include <stdio.h>
int fibonacci(int x)
{
    if(x==0||x==1)
    {
        return x;
    }
    else
    {
        return fibonacci(x-1)+fibonacci(x-2);
    }
}
int main()
{
    int terms;
    printf("Enter total fibonacci series numbers to be printed\n");
    scanf("%d",&terms);
    for(int n=0;n<terms;n++)
    {
        printf("%d ",fibonacci(n));
    }
    return 0;
}
