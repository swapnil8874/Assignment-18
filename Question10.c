//Write a function to find the repeated character in a given string
#include <stdio.h>  
#include <string.h>  
void dupli(char string[]);
int main()  
{  
    char string[] = "Great responsibility";  
    int count;    
    printf("Duplicate characters in a given string: \n");
    dupli(string);
} 
    void dupli(char string[])
    {
    for(int i = 0; i < strlen(string); i++) {  
       int count = 1;  
        for(int j = i+1; j < strlen(string); j++) {  
            if(string[i] == string[j] && string[i] != ' ') {  
                count++;  
                //Set string[j] to 0 to avoid printing visited character  
                string[j] = '0';  
            }  
        }  
        //A character is considered as duplicate if count is greater than 1  
        if(count > 1 && string[i] != '0')  
            printf("%c\n", string[i]);  
    }  
    }
    
 