/*Write a program that reads a 5x5 array of integers and then prints the row sums and the
sum of the columns:
Ex:
Enter row 1 : 8 3 9 0 10
Enter row 2 : 3 5 17 1 1
Enter row 3 : 2 8 6 23 1
Enter row 4 : 15 7 3 2 9
Enter row 5 : 6 14 2 6 0

Row Totals : 30 27 40 36 28
Columns Totals : 34 37 37 32 21*/

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