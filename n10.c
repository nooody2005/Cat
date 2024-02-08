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