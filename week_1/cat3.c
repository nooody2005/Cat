/*Write a program that asks the user to enter a dollars and cents amount, then display the
amount with 5% tax added:
INPUT: Enter an amount: 100.00
OUTPUT: With tax added : $ 105.00*/

#include <stdio.h>
int main()
{
    float dollars;
     printf ("enter the amount of dollars and cents = ");
     scanf ("%f", & dollars);
     printf ("\n");
     float i = dollars +.05*dollars;
     printf ("The amount of dollars with tax is = %f", i);
     return 0;
}