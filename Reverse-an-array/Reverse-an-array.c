#include<stdio.h>
#include<stdlib.h>
//Function to swapp two variables
void swapp(int *a,int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}
//Function to reverse the array
void reverse(int *a,int n)
{
	int i,j=n-1;
	for(i=0;i<n/2;i++)
	{
		swapp(&a[i],&a[j]);
		j--;
	}
}
int main()
{
	int n,i;
	printf("Enter the number of elements you want to enter in a dynamic array:");
	scanf("%d",&n);
	int *arr=malloc(n*sizeof(int));
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	reverse(arr,n);
	printf("Array after reversing it is :\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	free(arr);
	return 0;
}