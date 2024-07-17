/*Write a C program to convert string from lowercase to uppercase string using loop.*/

#include <stdio.h>
#include <string.h>

int main() 
{
    char name[] = "nada";
    int length = strlen(name);
    char NAME[length + 1];  

    for (int i = 0; i < length; i++) 
    {
        NAME[i] = name[i] - 32;  
    }
    NAME[length] = '\0';
    puts(NAME);

    return 0;
}