/*Write a C code containing a function that gets the fibonacci of a given number.
Hint: Fibonacci is defined as :
f(n) = f(n - 1) + F(n - 2), f(0) = 0, f(1) = 1.*/

#include <stdio.h>
int fibonacci(int num)
{
    if(num>1)
        return fibonacci(num-1)+fibonacci(num-2);
    else if(num==1)
        return 1;
    else
        return 0;
   
}
int main()
{
    int num ;
    scanf("%d", &num);
    printf("%d\n", fibonacci(num));

}