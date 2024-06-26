/*Write a C Program to Return multiple value from function-using pointers
Return minimum and maximum of the ARRAY*/


#include <stdio.h>

void fun (int size ,int *arr ,int *min,int *max)
{
    *min = arr[0];  
    *max = arr[0];

    for (int i=0;i<size ;i++)
    {
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
    }
    
}
int main()
{
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements of array : ",size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
  
    int min, max;
    fun(size, arr, &min, &max);

    printf("Minimum element is %d\nMaximum element is %d\n", min, max);
}