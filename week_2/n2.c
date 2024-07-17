/*Write a C code that asks the user to enter a number and check if it is an Even or Odd.*/

#include <stdio.h>
int main()
{
    int num ;
    printf ("Enter the number : ");
    scanf("%d", &num);
    if (num %2 == 0)
    {
        printf ( "Even");
    }
    else 
    {
        printf ( "Odd");
    }
}