//Write a function to transform a string into lowercase
#include<stdio.h>
#include<string.h>
void lowercase(char str[50]);
int main()
{
    char str[20];
    printf("Enter The String\n");
    gets(str);
    lowercase(str);
}
void lowercase(char str[50])
{
    printf("The lowercase of String is %s",strlwr(str));
}