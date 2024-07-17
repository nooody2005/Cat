/*Write a C code that will ask the user to enter a value then print it.*/

#include <stdio.h>
int main()
{
    int value ;
    printf ("Enter the value : ");
    scanf ("%d", &value);
    printf ("\n");
    printf("The value = %d", value);
    return 0;
}