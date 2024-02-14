#include <stdio.h>
int main()
{
    int i , j;
    printf ("Enter the two numbers : ");
    scanf("%d %d", &i ,&j);

    printf ("\nThe arithmatical operations : \n");
    printf ("i+j = %d\n", i+j);
    printf ("i-j = %d\n", i-j);
    printf ("i*j = %d \n", i*j);
    printf ("i/j = %d \n", i/j);

    printf ("***************\nThe logical operations : \n");
    printf ("i&j = %d\n", i&j);
    printf ("i|j = %d\n", i|j);
    printf ("i^j = %d\n", i^j);    

    printf ("***************\nThe betwise operations : \n");
    printf ("i&&j = %d\n", i&&j);
    printf ("i||j = %d\n", i||j);
    printf ("i! = %d \n", !i);
    printf ("!j = %d \n", !j);
    
    return 0;
}