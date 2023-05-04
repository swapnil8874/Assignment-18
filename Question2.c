//Write a function to reverse a string
#include<stdio.h>
#include<string.h>
void reverse();
int main()
{
    char str[20];
    reverse();
}
void reverse()
{
    char str[20];
    printf("Enter the String\n ");
    gets(str);
    printf("reverse of string is %s",strrev(str));
}