/*#include <stdio.h>
int main()
{
    int n ,count;
    printf ("Enter the length of array : ");
    scanf("%d", &n);
    int arr [n];
    printf ("\nEnter the elements of the array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        count =0;
        for (int j=0; j < i ;j++)
        {
            if (i==j)
            continue;
            if (arr[i]==arr[j])
            {
                count =1;
            } 
           
        }
        if (count == 0)
        {
            printf("%d ",arr[i]);
        }
    }
}*/

