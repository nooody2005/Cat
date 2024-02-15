#include <stdio.h>
int Get_Max(int num1, int num2)
{
    return (num1>num2) ? num1 : num2;
}
int main()
{
    int num1, num2;
    scanf("%d %d", &num1,&num2);
    int max = Get_Max(num1,num2);
    printf( "%d\n",max);

}