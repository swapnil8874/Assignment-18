// Write a function to count words in a given string
#include<stdio.h>
#include<string.h>
void count(char str[20]);
int main()
{
    char str[20];
    printf("Enter The String\n");
    gets(str);
    count(str);
}
void count(char str[20])
{
    int count=0,i;
    for(i=0;str[i];i++)
    {
       count++;
    }
    printf("Total number of words in a string is %d",count);
}