#include <stdio.h>
int main()
{
    int rating ;
    printf("Enter your rating : ");
    scanf("%d", &rating);
    if (rating >=85)
    {
        printf("Excellent 😎 ");
    }
    else if (rating<85 && rating >=75)
    {
        printf ("very good 😊 ");
    }
    else if (rating<75 && rating >=65)
    {
        printf (" good *._.* ");
    }
    else if (rating<65 && rating >=55)
    {
        printf ("very satisfied 😁 ");
    }
    else if (rating<55 && rating >=50)
    {
        printf ("satisfied 🫢 ");
    }
    else
    {
        printf ("failed 😭 ");
    }
}