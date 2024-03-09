//4-Write a C program to input any string from user and find the first occurrence of a given character in the string. 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fun(char arr[],int length,char _ch)
{
    for (int i = 0; i < length; i++)
    {
        if (_ch==arr[i])
        {
            if ((_ch >= 'A' && _ch <= 'Z') || (_ch >= 'a' && _ch <= 'z'))
            {
                printf("%c is alphabet that is found at index [%d]\n", _ch,i+1);
            }
            else if (_ch >= '0' && _ch <= '9')
            {
                printf("%c is a digit that is found at index [%d]\n", _ch,i+1);
            }
            //else if (temp != ' ')
            else
            {
                printf("%c is a special character that is found at index [%d]\n", _ch,i+1);
            }
        }
    }
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

    char _ch;
    printf("Enter your character : ");
    scanf("%c", &_ch);
    fun(arr,n,_ch);

}
