/*
  Program to design the function to check if the character is vowel or not and then count the number of vowels in the string
*/
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool is_Vowel(char c)
{
    if(c=='A'||c=='a'||c=='E'||c=='e'||c=='I'||c=='i'||c=='O'||c=='o'||c=='U'||c=='u')
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
    int i,v_count=0;
    char s[100];
    printf("Enter the string : ");
    fgets(s,100,stdin);
    for(i=0;i<strlen(s);i++)
    {
        if(is_Vowel(s[i]))
        {
            v_count++;
        }
    }
    printf("The count of vowel in the string is = %d\n",v_count);
    return 0;
}
