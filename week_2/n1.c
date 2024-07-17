/*Write a C code to calculate employee salary in a week based on his working hours, hour
rate is 50.
The program will ask the user to enter the working hours, then it will print his salary.
But if the working hours are less than 40 hours, a 10% deduction will be applied.*/

#include <stdio.h>
int main()
{
    int hours ;
    float rate =50 ,salary;
    printf ("please, Enter the working hours : ");
    scanf("%d", &hours);
    if (hours<40)
    {
       salary =hours*rate -.1*rate ;
    }
    else
    {
        salary = hours*rate;
    }
    printf("The salary for the week is = %f\n",salary);
}