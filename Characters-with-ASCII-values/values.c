//Program to print the ASCII value of all the characters from ASCII value 0 to ASCII value 255
#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<256;i++)
    {
        printf("%c has ASCII value %d \n",i,i);
    }    
    return 0;
}
