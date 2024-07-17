/*Write a C code that asks the user to enter his ID and then the program will print his
name.
Available IDs are: (1234 -> Harry), (5678 -> Ron), (1145 -> Hermione)
Any other number, the program will print "Wrong ID".*/

#include  <stdio.h>
int main()
{
    int ID ;
    printf ("Enter your ID : ");
    scanf("%d", &ID);
    switch (ID)
    {
        case 1234 :
        printf("Name : Harry");
        break;
        case 5678 :
        printf("Name : Hermione");
        break;
        default :
        printf("Wrong ID ");
    }
}