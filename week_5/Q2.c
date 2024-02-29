/*Write a C code that asks the user to enter 2 values and save them in two variables, then
the program sends these variables by address to a function that returns the summation
of them. The program then prints the result.*/
#include <stdio.h>
int fun(int *ptr1, int *ptr2)
{
    int sum=0;
    sum = *ptr1 + *ptr2;
    return sum;
}
int main()
{
    int x , y;
    printf("Enter the num1 = ");
    scanf ("%d", &x);
    printf("Enter the num2 = ");
    scanf ("%d", &y);
    int sum = fun(&x, &y);
    printf("sum = %d", sum);

}