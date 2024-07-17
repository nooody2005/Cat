/*Write a C code that asks the user to enter the result of 3 x 4, In case the user entered the
correct answer the program will print "Thanks", otherwise the program will print "Try
again" until the user enters the correct answer.*/

#include <stdio.h>
int main()
{
    int n  ;
    printf("Enter the result of 3*4 = ");
    scanf("%d", &n);
    if (n == 12)
    {
        printf("Thanks *_*");
    }
    else 
    {
        printf("Try again");
    }
}