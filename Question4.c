//Write a function to transform string into uppercase
#include<stdio.h>
#include<string.h>
void uppercase(char str[50]);
int main()
{
    char str[20];
    printf("Enter The String\n");
    gets(str);
    uppercase(str);
}
void uppercase(char str[50])
{
    printf("The Uppercase of String is %s",strupr(str));
}