/*
  program to check if the entered character is vowel or consonant
*/
#include<stdio.h>
int main()
{
  char ch;
  printf("Enter the character : ");
  scanf("%c",&ch);
  if((ch>=97 && ch<=122)||(ch>=65 && ch<=90))
  {
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
      printf("The entered character is vowel.\n");
    }
    else
    {
      printf("The entered character is consonant.\n");
    }
  }
  else
  {
    printf("The entered character is not an alphabet.\n");
  }
  return 0;
}
