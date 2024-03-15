/*write a c program to find out maximum and minimum form an array  
using dynamic memory allocation */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
    int n ;
    printf ("Enter the length of an array : ");
    scanf("%d", &n);
    
    int *arr = malloc (n*sizeof(int));

    if (arr == NULL) 
    {
        printf("Memory allocation failed.\n");
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d", &arr[i]);
    }
    int min = arr[0] , max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("\nThe maximum element is %d \nThe minimum elemnt is %d",max,min);
}