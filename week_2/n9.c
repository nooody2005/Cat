/*Write a C to calculate the factorial of an integer entered by the user using a while loop.*/

#include <stdio.h>
int main()
{
    int n ,fact=1;
    printf ("Enter the number : ");
    scanf("%d", &n);
    while(n!=0)
    {
        fact=fact*n;
        n--;
    }
    printf ("Factorial = %d\n",fact);
}