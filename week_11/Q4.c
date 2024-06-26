/*4-LOOPS
Write a C program to input a number and calculate sum of digits*/

#include <stdio.h>
int main ()
{
    int num ,digit ,sum=0;
    printf ("Enter any number to find sum of its digit : ");
    scanf("%d",&num);

    while (num>0) 
    {
        digit=num%10;
        sum+=digit;
        num/=10;
    }
    printf("sum of digits = %d\n",sum);
}