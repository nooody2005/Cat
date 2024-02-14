#include <stdio.h>
int main()
{
    int n, i ,j ;
    printf ("Enter the number :\n");
    scanf ("%d", &n);
    for (i=1; i<=12; i++) 
    {
        printf ("%d*%d = %d ",i,n,i*n);
        printf ("\n");
    } 
}
