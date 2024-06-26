/*3-switch case
write C Program to Make a Simple Calculator Using switch...case*/

#include <stdio.h>
int main ()
{
    char op ;
    printf("Enter your operator (+, -,* ,/): ");
    scanf("%c", &op);

    float num1 , num2 ,res=0.0;
    printf("Enter two operands: ");
    scanf("%f\n %f", &num1,&num2);

    switch (op)
    {
    case '+': 
        res=num1+num2;
        break;
    
    case '-': 
        res=num1-num2;
        break;
        
    case '*': 
        res=num1*num2;
        break;
        
    case '/': 
        res=num1/num2;
        break;
        
    default:
        break;
    }
     
    printf("%0.1f %c %0.1f = %0.1f",num1 ,op ,num2,res);
 
}