//Write a function to compare two strings
#include <stdio.h>  
#include<string.h> 
 void compare();
int main()  
{  
   char str1[50];    
   char str2[50];  
     compare();
   
}  
void compare()
{
    char str1[50];   
   char str2[50];    
   int value;   
   
   printf("Enter the first string : ");  
   gets(str1); 
   printf("Enter the second string : ");  
   gets(str2);
   
   // comparing both the strings using strcmp() function  
   value = strcmp(str1,str2);  
   if(value == 0)  
   printf("strings are same");  
   else  
   printf("strings are not same");  
}

