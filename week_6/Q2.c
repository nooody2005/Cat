//2-Write a C program to count total number of alphabets, digits or special characters in a string using loop. 
#include <stdio.h>

int main() 
{
    printf("Enter your string: ");

    int alphabet = 0, digits = 0, special = 0;
    int temp;

    while ((temp = getchar()) != '\n') 
    {
        if ((temp >= 'A' && temp <= 'Z') || (temp >= 'a' && temp <= 'z'))
        {
            alphabet++;
        }
        else if (temp >= '0' && temp <= '9')
        {
            digits++;
        }
        //else if (temp != ' ')
        else
        {
            special++;
        }
    }

    printf("The total number of alphabets is = %d, digits = %d, special characters = %d", alphabet, digits, special);

    return 0;
}

