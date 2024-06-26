/*5- Function
write C Program to find maximum and minimum of 4 numbers using functions.*/

#include <stdio.h>

int fun_min( int num1, int num2 , int num3 , int num4)
{
    int min=0;
    min = num1 < num2 ? num1 : num2;
    min = min < num3 ? min : num3;
    min = min < num4 ? min : num4;
    return min;
}

int fun_max( int num1, int num2 , int num3 , int num4)
{
    int max=0;
    max = num1 > num2 ? num1 : num2;
    max = max > num3 ? max : num3;
    max = max > num4 ? max : num4;
    return max;
}
int main ()
{
    int num1, num2, num3, num4;
    printf("Enter four numbers : ");
    scanf("%d %d %d %d", &num1 , &num2 ,&num3 , &num4);

    printf ("minmum number = %d \n",fun_min(num1, num2, num3, num4));
    printf ("maximum number = %d \n",fun_max(num1, num2, num3, num4));
}