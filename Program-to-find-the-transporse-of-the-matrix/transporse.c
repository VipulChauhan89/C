//Program to find the transporse of the matrix
#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the number of rows and number of columns of the matrix : ");
    scanf("%d%d",&n,&m);
    printf("Enter the %d elements :\n",n*m);
    int matrix[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Entered matrix :\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the above matrix :\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",matrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}
