#include <stdio.h>
int count_fun(int num)
{
    int count=0;
    if (num == 0)
    return 1;
    else
    {
        while(num!=0)
        {
            num =num /10;
            count++;
        }
        return count;
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", count_fun(num));

}