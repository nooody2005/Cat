/*1-Expresion & operators
Write a C program to take any number from user and count the total number
of zeros (0s) and ones (1s)*/

#include <stdio.h>
int main ()
{
    int num ,zeros=0 ,ones=0;
    printf("Enter any number: ");
    scanf("%d", &num);

    long long int num_bits = sizeof(num)*8;
    for (int i=0; i<num_bits; i++)
    {
        if(num%2==0)    zeros++;
        else            ones++;
        num/=2;
        
        // if (num & 1)   ones++;
        // else           zeros++;
        // num >>= 1; 
    }
    printf("Total zero bit is %d\n", zeros);
    printf("Total one bit is %d\n", ones);
    
}