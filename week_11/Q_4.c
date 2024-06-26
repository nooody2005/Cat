/*write C Program to calculate the power of a number*/

#include <stdio.h>
int main ()
{
    int num ,power ,ans=1;

    printf("Enter the number : ");
    scanf("%d",&num);

    printf("Enter a Power : ");
    scanf("%d",&power);

    for (int i = 0; i < power; i++)
    {
        ans *=num;
    }
    printf("Answer = %d\n", ans);
}