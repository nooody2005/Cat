/*Write a C code to manage a class of 10 students. Each student studies 4 subjects
Programming, Data Structures, Discrete Math and Algorithms.
First define an array of 10 elements and assign random grades for students. The system
will ask the user to enter the student ID then the system will show its grades. The
software shall manage wrong IDs and enable admins to manipulate the grades of the
students.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_STUDENTS 10
#define NUM_SUBJECTS 4

struct Student
{
    int id;
    float grades[NUM_SUBJECTS];
};

int main()
{
    int _student_id[NUM_STUDENTS];
    struct Student students [NUM_STUDENTS]=
    {
        {700,120,150,144,280},
        {102,145,146,116,175},
        {103,187,197,798,178},
        {100,168,185,165,146},
        {105,179,197,357,176},
        {906,758,167,168,156},
        {107,178,156,645,167},
        {878,417,157,174,157},
        {109,186,167,468,156},
        {110,157,177,463,167}
    };
    printf("SUBJECTS \n");
    printf("1 : Programming\n2 : Data Structures\n3 : Discrete Math\n4 : Algorithms \n\n\n")  ;

    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        printf("Enter the ID of student %d : ", i + 1);
        scanf("%d", &_student_id[i]);

        if (students[i].id==_student_id[i])
        {

            for (int j = 0; j < NUM_SUBJECTS; j++)
            {
                printf("Enter the grade of student %d for subject %d : ", i + 1, j + 1);
                scanf("%f", &students[i].grades[j]);
            }
            printf("\n*************************************************************************\n");
        }
        else
        {
            printf("ID is not true");
        }

    }
}
