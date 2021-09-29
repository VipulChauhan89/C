#include<stdio.h>
//Function to print armstrong numbers in an array
void armstrong(int *arr,int n)
{
	int temp,sum,rem;
	printf("Armstrong numbers are: ");
	for(int i=0;i<n;i++)
	{
		temp=arr[i];
		sum=0;
		rem=0;
		while(temp!=0)
		{
			rem=temp%10;
			sum+=(rem*rem*rem);
			temp=temp/10;
		}
		if(sum==arr[i])
		{
			printf("%d ",sum);
		}
	}
}
int main()
{
	int n;
	printf("Enter the number of elements you want to enter in an array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d elements:\n",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	armstrong(arr,n);
	return 0;
}
