/*
    Program to find the sum and the average of the number in an array
*/
#include<stdio.h>
int main()
{
    int n;
    long long int sum=0;
    printf("Enter the number of elements you want to enter in an array : ");
    scanf("%d",&n);
    long long int arr[n];
    float average=0;
    for(int i =0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
        sum+=arr[i];
    }
    average=sum/(float)n;
    printf("The sum of an element in an array is = %lld\n",sum);
    printf("The average of an element in an array is = %6.2f\n",average);
    return 0;
}
