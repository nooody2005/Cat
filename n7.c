#include  <stdio.h>
int main()
{
    int num , i ,sum=0 ;
    float av=0;
    for (i = 1; i <= 10 ; i++)
    {
        printf ("Enter the num%d : ", i);
        scanf ("%d", &num);
        printf ("\n");
        sum +=num;
    }
    printf("The sum is = %d\n", sum);
    av =(float)sum /10.0;
    printf ("The average is = %.2f\n", av);
}