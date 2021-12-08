//To check if the entered number is palindrome or not
#include<stdio.h>
//Function to check the palindrome number
void palindrome(int num)
{
    int temp,sum=0,rem;
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    if(num==sum)
    {
        printf("%d is a palindrome number .\n",num);
    }
    else
    {
        printf("%d is not a palindrome number .\n",num);
    }
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    palindrome(num);
    return 0;
}
