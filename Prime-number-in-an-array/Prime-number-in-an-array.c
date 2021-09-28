//Function to print all the prime numbers in an array
#include<stdio.h>
#include<math.h>
void prime(int *arr, int num)
{
    printf("The prime numbers are:");
    for(int i=0;i<num;i++)
    {
        int count=0;
        for(int j=2;j<=sqrt(arr[i]);j++)
        {
           if(arr[i]%j==0)
           {
               count=count+1;
           }
        }
        if(count==0 && arr[i]!=1)
        {
            printf("%d ",arr[i]);
        }
    }
}
int main()
{
    int num;
    printf("Enter the number of elements you wanted to enter in array:");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the elements of Array:\n");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    prime(arr,num);
    return 0;
}