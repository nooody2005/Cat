/*write C Program to convert binary number to decimal*/


#include <stdio.h>
int main()
{
    long long int num;
    printf("Enter a binary number :");
    scanf("%lld", &num);

    int sum = 0, count = 0;

    long long int n = num;
    while (n>0)
    {
        count++;
        n /= 10;
    }

    int s =0;
    for (int i = 0; i < count; i++)
    {
        s=num%10;
        s<<=i;
        sum += s;
        num /= 10;
    }
    printf ("%d in binary = %d in decimal",num,sum);
}