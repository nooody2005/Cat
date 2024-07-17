/*Write a c code login code but use a function called login.
Hint: surprise me 😊*/

#include <stdio.h>
int login()
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
            printf("No more tries ...\n");
            return 0;
        }
        else
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int res;
    res = login();
    if (res == 1)
    {
        printf("Login successful");
        printf("\nWelcome .^_^.");
    }
    else
    {
        printf("Sorry ,Your id is wrong!\n");
        printf ("You are not registered ..");
    }
}
