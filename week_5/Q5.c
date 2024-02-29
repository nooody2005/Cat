/*Write a C code that defines 3 int variables x, y and z and 3 pointers to int px, py and pz.
Set x, y, z to three distinct values. Set px, py and pz to the addresses of x, y, z respectively.
Can you expect the output before you run the program ... ?
a- Print with labels the values of x, y, z, px, py, pz, *px, *py, *pz.
b- Print the message: Swapping pointers.
c- Execute the swap code: pz = px; px = py; py = pz;
d- Print with labels the values of x, y, z, px, py, pz, *px, *py, *pz.*/

#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter num1 : ");
    scanf("%d",&x);
    printf("Enter num2 : ");
    scanf("%d",&y);
    printf("Enter num3 : ");
    scanf("%d",&z);

    int *px, *py, *pz;
    px = &x; py = &y; pz=&z;

    printf("\nx = %d , y = %d , z = %d", x, y, z);
    printf("\npx = %d , py =%d , pz = %d",px, py, pz);
    printf("\n*px = %d , *py =%d , *pz = %d",*px, *py, *pz);

    printf("\n\nswapping pointers") ;
    int *temp1 = pz;
    pz = px;
    px = py;
    py =temp1;

    printf("\n\nx = %d , y = %d , z = %d", x, y, z);
    printf("\npx = %d , py =%d , pz = %d",px, py, pz);
    printf("\n*px = %d , *py =%d , *pz = %d",*px, *py, *pz);
    
}
