// Program to print the pascal triangle
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    int A[n][n];
    for(int i=0;i<n;i++)
    {
        A[i][0]=1;
        A[i][i]=1;
        for(int j=1;j<i;j++)
        {
            A[i][j]=A[i-1][j-1]+A[i-1][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n-1;j++)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
