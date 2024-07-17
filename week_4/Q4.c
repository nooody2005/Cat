/*Write a C code to find the repeating element in a given array through a function. The
function takes the array and returns the element.*/

#include <stdio.h>
int arr_fn(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j=0; j < n ;j++)
        {
            if (i==j)
            continue;
            
            if(arr[i]==arr[j])
            {
                return arr[i];
            }
        }
    }
    return -1;
}
int main()
{
    int n;
    printf ("Enter the length of array : ");
    scanf("%d", &n);
    int arr [n];
    printf ("\nEnter the elements of the array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int m = arr_fn(arr,n);
    if (m != -1)
    {
        printf("The repeated element is = %d ",arr_fn(arr,n));
    }
}