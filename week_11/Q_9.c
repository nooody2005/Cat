/*Write a C program to input any number from user and check whether nth bit of
the given number is set (1) or not (0)*/


#include <stdio.h>
int main()
{
    int num ;
    printf ("Enter any number : ");
    scanf("%d", &num);

    int num_bits = sizeof(num)*8;
    int n_bit[num_bits];
    for (int i=0; i<num_bits; i++)
    {
        //n_bit[i] = (num >> i) & 1;

        if(num%2==0)    n_bit[i] = 0;
        else            n_bit[i] = 1;

        num/=2;
    }
    int nth_bit ;
    printf ("Enter nth bit to check ( 0 , %d) : " ,num_bits-1);
    scanf("%lld", &nth_bit);
    printf ("The %d bit is set to %d",nth_bit,n_bit[nth_bit]);
}