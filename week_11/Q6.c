/*6- Array
Write a C program to input elements in array from user and count even and
odd elements in array*/

#include <stdio.h>
int main()
{
    int size ,even=0 ;
    printf ("Enter size of the array : ");
    scanf("%d", &size);
    int arr[size];
    printf ("Enter %d elements in array : ", size);
    for (int i = 0; i < size; i++)
    {
        scanf ("%d", &arr[i]);

        if (arr[i]%2==0)  even++;
    }
    printf ("Total even elements : %d\n",even);
    printf ("Total odd elements : %d",size-even);
}