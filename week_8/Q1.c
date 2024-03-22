/*Write a C code defines a structure for employees that contains his salary, bonus and
deductions. The program shall ask the user to enter this information for three employees
(Mohsen, Maged and Mariam). Then the program will print the total values supplied by
the finance team.*/

#include <stdio.h>

struct Employee
{
    float salary;
    float bonus;
    float deductions;
};

int main()
{
    struct Employee Mohsen;
    struct Employee Maged;
    struct Employee Mariam;

    printf("Enter the salary of Mohsen : ");
    scanf("%f", &Mohsen.salary);
    printf("Enter the bonus of Mohsen : ");
    scanf("%f", &Mohsen.bonus);
    printf("Enter the deductions of Mohsen : ");
    scanf("%f", &Mohsen.deductions);

    printf("Enter the salary of Maged : ");
    scanf("%f", &Maged.salary);
    printf("Enter the bonus of Maged : ");
    scanf("%f", &Maged.bonus);
    printf("Enter the deductions of Maged : ");
    scanf("%f", &Maged.deductions);

    printf("Enter the salary of Mariam : ");
    scanf("%f", &Mariam.salary);
    printf("Enter the bonus of Mariam : ");
    scanf("%f", &Mariam.bonus);
    printf("Enter the deductions of Mariam : ");
    scanf("%f", &Mariam.deductions);

    float totalSalary = Mohsen.salary + Maged.salary + Mariam.salary;
    float totalBonus = Mohsen.bonus + Maged.bonus + Mariam.bonus;
    float totalDeductions = Mohsen.deductions + Maged.deductions + Mariam.deductions;

    float total = totalSalary + totalBonus - totalDeductions;

    printf("The total values supplied by the finance team : %.3f\n", total);
    
    return 0;
}
