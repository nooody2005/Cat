/*Write a C code that defines a function which takes an array as input argument and apply
the bubble sorting algorithm on it, then prints the result.*/

#include <stdio.h>
int *fun(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j=i+1; j<n ;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}  

int main()
{
    int n;
    printf("Enter the length of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf ("Enter the elements of the array : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int *sorted_arr = fun(arr,n);
    for(int i = 0; i < n; i++)
    {
        printf("%d ",sorted_arr[i]);
    }
}

