//Write a function to check whether a given string is an alphanumeric string or not. 
 #include <stdio.h>  
#include<string.h>
void alphanumeric(char str[20],int i);
int main()
{
    char str[20];
    int i;
    printf("Enter The String\n");
    gets(str);
    alphanumeric(str,i);
}
void alphanumeric(char str[20],int i)
{
    int A,B;
    for(i=0;str[i];i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            A=1;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            B=1;
        }
    }
        if(A==1 && B==1)
        {
            printf("This is an Alphanumeric String\n");
        }
        else
        {
            printf("This is not an Alphanumeric String\n");
        }
    
}