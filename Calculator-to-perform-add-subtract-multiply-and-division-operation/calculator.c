/*
    Program to provide the menu to perform the calculation of '+', '-', '%', '*' by making the calculator
    And take two numbers as an input and print the output.
*/
#include<stdio.h>
int main()
{   
    char ch;
    long double num1,num2;
    printf("Enter an operator ('+','-','*','/') : ");
    scanf("%c",&ch);
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
    {
        printf("Enter the first number : ");
        scanf("%Lf",&num1);
        printf("Enter the second number : ");
        scanf("%Lf",&num2);
    }
    switch(ch)
    {
        case '+':
            printf("%Lf + %Lf = %Lf\n",num1,num2,num1+num2);
            break;
        case '-':
            printf("%Lf - %Lf = %Lf\n",num1,num2,num1-num2);
            break;
        case '*':
            printf("%Lf x %Lf = %Lf\n",num1,num2,num1*num2);
            break;
        case '/':
            printf("%Lf / %Lf = %Lf\n",num1,num2,num1/num2);
            break;
        default:
            printf("Not a valid operaor.\n");
    }
    return 0;
}
