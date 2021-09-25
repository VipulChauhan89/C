/*Program to find the largest , second largest , smallest and second smallest element entered in an array*/
#include<stdio.h>
int i,j;
//Function to sort the array element using Selection Sort
void calculate(int *a,int n)
{
    for(i=0;i<n;i++)  
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    }
printf("Largest= %d\nSecond Largest= %d\nSmallest= %d\nSecond Smallest= %d",a[n-1],a[n-2],a[0],a[1]);
}
int main()
{
    int n;
    printf("Enter the number of elements you want to enter in an array :");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    calculate(arr,n);
    return 0;
}
