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