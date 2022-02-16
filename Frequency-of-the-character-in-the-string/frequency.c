//Program to count the frequency of a character in the string
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
bool check(char c,char d)
{
    if(c==d)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int i,count=0;
    char d;
    char s[100];
    printf("Enter the string : ");
    fgets(s,100,stdin);
    fflush(stdin);
    printf("Enter the character whose frequency you want to find out : ");
    scanf("%c",&d);
    for(i=0;i<strlen(s);i++)
    {
        if(check(toupper(s[i]),toupper(d)))
        {
            count++;
        }
    }
    printf("The count of character '%c' in the string is = %d\n",d,count);
    return 0;
}
