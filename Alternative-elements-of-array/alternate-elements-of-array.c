//Program to print the alternative element of an array
#include<stdio.h>
int main()
{
    int n,j=0,flag=0;
    printf("Enter the number of elements you want in an array to delete the alternate elements:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            arr1[j]=arr[i];
            j++;
            flag++;
        }
    }
    printf("Alternate Elements of array are:\n");
    for( int i=0;i<flag;i++)
    {
        printf("%d ",arr1[i]);
    }
    return 0;
}