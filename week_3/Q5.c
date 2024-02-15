#include <stdio.h>
int fibonacci(int num)
{
    if(num>1)
        return fibonacci(num-1)+fibonacci(num-2);
    else if(num==1)
        return 1;
    else
        return 0;
   
}
int main()
{
    int num ;
    scanf("%d", &num);
    printf("%d\n", fibonacci(num));

}