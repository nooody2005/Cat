/*Write a code that scans 3 numbers from the user and prints them in reversed order.*/

#include <stdio.h>
int main()
{
    int num1,num2, num3;
    printf ("Enter the three numbers : ");
    scanf("%d %d %d", &num1, &num2 , &num3);
    printf ("The numbers after reversing : %d %d %d \n", num3, num2, num1);
    
    return 0;
}