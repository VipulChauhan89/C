#include <stdio.h>
int SumOfSeries(int N)
{
    int i;
    if(N%2==0)
    {
        i=-1;
    }
    else
    {
        i=1;
    }
    if(N==1)
    {
        return 1;
    }
    else
    {
        return i*N*N+SumOfSeries(N-1);
    }
}
int main()
{
    int N;
    printf("Enter the limit\n");
    scanf("%d",&N);
    printf("Sum of the series is = %d",SumOfSeries(N));
    return 0;
}
