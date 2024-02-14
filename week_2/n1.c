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