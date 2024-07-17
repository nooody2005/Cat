/*Write a program in C to print all unique elements of an unsorted array.
The elements of the array entered by the user.
Ex:
The given array is : 1 5 8 5 7 3 2 4 1 6 2
Unique Elements in the given array are:
1 5 8 7 3 2 4 6*/

#include <stdio.h>
int main()
{
    int n ,found;
    printf ("Enter the length of array : ");
    scanf("%d", &n);
    int arr [n];
    printf ("\nEnter the elements of the array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf ("\nUnique Elements in the given array are : ");

    for (int i = 0; i < n; i++)
    {
        found =0;
        for (int j=0; j < i ;j++)
        {
            if (i==j)
            continue;
            if (arr[i]==arr[j])
            {
                found =1;
            } 
           
        }
        if (found == 0)
        {
            printf("%d ",arr[i]);
        }
    }
    printf ("\n\n");
}

