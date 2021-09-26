#include<stdio.h>
//Function to find the repeating elements and store them in separate array
void repeating(int *arr,int num)
{
    int count=0;
    for(int i=0;i<num;i++)
    {
        for(int j=i+1;j<num;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                continue;
            }
        }
         if(count==3)
            {   
                printf("The third repeating element is : %d",arr[i]);
                break;
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
    repeating(arr,num);
    return 0;
}
