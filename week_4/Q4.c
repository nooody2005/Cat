/*#include <stdio.h>
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
}*/
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
        if (count == 1)
        {
            printf("%d ",arr[i]);
        }
    }
}*/
/*#include <stdio.h>

int max(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main() {
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);
    int largest = max(X, Y, Z);
    printf("%d\n", largest);
    return 0;
}
*/
/*#include <stdio.h>

#define PI 3.141592653

int main() {
    double R;
    scanf("%lf", &R);
    double area = PI * R * R;
    printf("A=%.4lf\n", area);
    return 0;
}*/
/*#include <stdio.h>

int main() {
    long long X;
    scanf("%11d", &X);
    
    int last_digit = X % 10; 
    
    if (last_digit > 5)
        printf("GOOD\n");
    else
        printf("BAD\n");
    
    return 0;
}*/
#include <stdio.h>

int main() 
{
    int N, L , R;
    scanf("%d %d %d", &N,&L,&R);
 
    int arr[N] ;
    int count = 0;
    for(int i = 0; i < N; i++)
    {
        scanf("%d",arr[i]);
    }
    for(int i = 0; i < N; i++)
    {
        if (arr[i]>= L && arr[i]<=R )
        {
            count++;
        }
    }
}


