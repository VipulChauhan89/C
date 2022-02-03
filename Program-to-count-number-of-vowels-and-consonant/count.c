//Program to count the number of vowels and consonants in the string
#include<stdio.h>
int main()
{
    int i,v_count=0,c_count=0;
    char ch[100];
    printf("Enter the string : ");
    fgets(ch,100,stdin);
    for(i=0;ch[i]!='\0';i++)
    {
       if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
       {
           v_count++;
       }
       else if(ch[i]==' '|| ch[i]=='\n')
       {
           continue;
       }
       else
       {
           c_count++;
       }
    }
    printf("The number of vowels is = %d\nThe number of consonants is = %d\n",v_count,c_count);
    return 0;
}
