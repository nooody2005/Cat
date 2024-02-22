#include <stdio.h>
int main()
{
    int n, temp;
    printf("Enter the length of your array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ascending = 0;
    int descending = 1;
    int choice ;
    printf("0 : ascending ");
    printf("\n1 : descending ");
    printf("\nEnter your choice : ");
    scanf("%d", &choice);

    if(choice == 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j=i+1;j<n ;j++)
            {
                if(arr[i]>arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }  
    else
    {
        for (int i = 0; i < n ; i++) 
        {
            for (int j=i+1;j<n ;j++)
            {
                if(arr[i]<arr[j])
                {
                    int temp =arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }

    }
    for (int i=0; i<n ;i++)
    {
        printf("%d ",arr[i]);
    }

}