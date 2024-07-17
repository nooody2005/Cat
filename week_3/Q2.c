/*Write a C code swap two global variables through a function.*/

#include <stdio.h>
int x , y ;

int main()
{
    scanf("%d %d", &x ,&y);
    int z=0;
    z = x;
    x = y;
    y = z;
    printf("%d %d", x ,y);

}