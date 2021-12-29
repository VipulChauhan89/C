/*
    Program to print the multiplication table of N inputed from the user
*/
#include <stdio.h>
int main()
{
    int N,i;
    printf("Enter the number to print its table : ");
    scanf("%d",&N);
    for(i=1;i<=10;i++)
    {
        printf("%d X %d  = %d \n",N,i,(N*i));
    }
    return 0;
}
