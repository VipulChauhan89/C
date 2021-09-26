#include<stdio.h>
//Function to check and print the palindrome number in an array
void palindrome(int *arr,int num)
{
    int temp,sum=0,rem;
    printf("The palindrome numbers are: ");
    for(int i=0;i<num;i++)
    {
        sum=0;
        rem=0;
        temp=arr[i];
        while(temp!=0)
        {
            rem=temp%10;
            sum=sum*10+rem;
            temp=temp/10;
        }
        if(arr[i]==sum)
        {
            printf("%d  ",arr[i]);
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
    palindrome(arr,num);
    return 0;
}