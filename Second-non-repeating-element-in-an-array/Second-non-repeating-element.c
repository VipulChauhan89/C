//Program to print the second non repeating element of an array
#include <stdio.h>
int main()
{
    int n,i,j,count=0,flag=0;;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    int arr1[n];
    printf("Enter %d elements:\n",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        count=0;
        for (j= 0;j<=n;j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            }
        }
        if (count==1)
        {
            arr1[flag]=arr[i];
            flag++;
        }
    }
    printf("Non repeating element of array are : ");
    for (i=0;i<flag;i++)
    {
        printf("%d ",arr1[i]);
    }
    if (flag>1)
    {
        printf("\nSecond Non  repeating element of array is : %d",arr1[1]);
    }
    else if (flag==1)
    {
        printf("\nThere is only 1 non repeting element in array i.e %d",arr1[0]);
    }
    else
    {
        printf("\nThere is No non repeting element in the array.");
    }
    return 0;
}

