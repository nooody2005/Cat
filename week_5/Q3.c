/*Write a C code that defines 2 arrays, and sends them to a function that applies scalar
multiplication between the two arrays and returns the result, the main function then will
print the result.*/

#include <stdio.h>
int *fun(int arr1[], int arr2[], int n ,int result[])
{
    for (int i=0; i<n; i++) 
    {
        result[i] = arr1[i] * arr2[i];
    }
    return result;
}
int main()
{
    int n ;
    printf("Enter the length of two arrays : ");
    scanf("%d",&n);

    int arr1[n] ,arr2[n] ,result[n];

    printf("Enter the elements of the first array : ");
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    printf("Enter the elements of the second array : ");
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr2[i]);
    }

    int *ptr = fun(arr1,arr2,n,result);

    for (int i=0; i<n; i++)
    {
        printf("%d ",ptr[i]);
    }
 
}
