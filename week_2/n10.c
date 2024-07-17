/*Write a C that asks the user to enter his ID and his password, if the ID is correct the
system will ask the user to enter his password up to 3 times, if he enters the password
right the system welcomes him, if the three times are incorrect, the system prints "No
more tries". The system prints "You are not registered" on every wrong try. (Login
code)*/

#include <stdio.h>
int main()
{
    int ID = 2005;
    int Password = 632005;
    int id , pass ,count =3;
    printf("Enter your ID : ");
    scanf("%d", &id);

    if(id == ID)
    {
        while(count !=0)
        {
            printf ("Enter your password : ");
            scanf("%d", &pass);

            if (pass == Password)
            {
                printf("Welcome .^_^.");
                break;
            }
            else 
            {
                count--;
                printf("Try again\n");
            }
        }
        if (count == 0)
        {
            printf("Sorry *_* ,No more tries ...\n");
            printf ("You are not registered  <'_'>  ");
        }
    }
    else
    {
        printf("Sorry ,Your id is wrong!\n");
        printf ("You are not registered ..");
    }
}