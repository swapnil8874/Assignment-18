//Write a function to calculate length of the string
#include<stdio.h>
#include<string.h>
void length(int i);
int main()
{
    char str[10];
    int i;
    length(i);
}
void length(int i)
{
       char str[10]; 
       printf("Enter the String\n ");
    gets(str);
    printf("length of the string is:%d",strlen(str));
}