#include <stdio.h>
int main()
{
    int arr[5][5];
    for (int i=0; i<5; i++)
    {
        printf("Enter row %d : ", i+1);
        for (int j=0; j<5; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    int sum1 =0 ,sum2=0;

    printf("Row total : ");
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            sum1 = sum1 +arr[i][j];
        }
        printf("%d ",sum1);
        sum1=0;
    }
    printf("\n");
    printf("Columns total : ");
    for (int i=0; i<5; i++)
    {
         for (int j=0; j<5; j++)
        {
            sum2 = sum2 +arr[j][i];
        }
        printf("%d ",sum2);
        sum2 =0;
    }
    
}