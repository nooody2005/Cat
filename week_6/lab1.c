/*writre a c program to print the student's marks allocate the memory dynamically , 
the student can add the marks from 1 to n subjects depending on number of 
subjects he is in (use realloc)*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
    int n;
    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    int *marks =(int*)realloc(marks,n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter marks for subject %d : ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\nStudent's marks for each subject:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("Subject %d: %d\n", i + 1, marks[i]);
    }

    free(marks);
 
}