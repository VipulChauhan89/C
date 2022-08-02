//Program to concatenate two strings
#include <stdio.h>
int main() 
{
  char s1[100]="hello",s2[]=" how are you?";
  int length,j;
  length=0;
  while(s1[length]!='\0') 
  {
    length++;
  }
  for(j=0;s2[j]!='\0';j++,length++) 
  {
    s1[length]=s2[j];
  }
  s1[length]='\0';
  printf("After concatenation: %s\n",s1);
  return 0;
}
