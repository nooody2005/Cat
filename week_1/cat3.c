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