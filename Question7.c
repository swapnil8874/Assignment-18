//Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
#include<string.h>
void palindrome(char str[20]);
int main()
{
    char str[20];
    printf("Enter The String\n");
    gets(str);
    palindrome(str);
}
void palindrome(char str[20])
{
    printf("The Reverse of String is %s\n",strrev(str));
    //char x = strrev();
    if(str == strrev(str))
    {
        printf("Given String is Palindrome\n");
    }
    else
    {
        printf("Given String Is not Palindrome");
    }
}