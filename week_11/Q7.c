/*7-String
Write C Program to Copy String Without Using strcpy().*/

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int size;
    printf("Enter size of string length : ");
    scanf("%d", &size);

    while(getchar() != '\n');

    char str[size] ,new_str[size];
    printf("Enter any string : ");
    gets(str);

    for (int i = 0; i < size; i++)
    {
        new_str[i]=str[i];
    }
    printf("coppied string : %s", new_str);

}
