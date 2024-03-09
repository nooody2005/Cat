//3-Write a C program to find reverse of a given string using loop. How to find reverse of any given string using loop in C programming.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char temp[])
{
    char new_temp[strlen(temp)+1];
    for (int i = 0; i <strlen(temp); i++)
    {
        new_temp[strlen(temp)-i-1] = temp[i];

    }
    new_temp[strlen(temp)] = '\0';
    puts(new_temp);
}
int main() 
{ 
    int n;
    printf("Enter the length of the string : ");
    scanf("%d", &n);
    getchar();

    printf("Enter your string : ");
    char arr [n];
    gets(arr);
    reverse(arr);
    
}
