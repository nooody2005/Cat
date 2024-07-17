/*Write a C code that asks the user to enter 3 numbers, the program will print the
maximum number of them.*/

#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf ("Enter three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1>num2 && num1>num3)
    {
        printf ("%d : is the maximum number " ,num1);
    }
    else if (num2>num1 && num2>num3)
    {
        printf ("%d : is the maximum number ",num2);
    }
    else 
    {
        printf ("%d : is the maximum number ",num3);
    }

}