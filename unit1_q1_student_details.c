/* Unit I - Q1: Accept a student's name, roll number and branch, then display the details */
#include <stdio.h>

int main()
{
    char name[50], branch[30];
    int roll;

    printf("Enter student name: ");
    scanf("%s", name);
    printf("Enter roll number: ");
    scanf("%d", &roll);
    printf("Enter branch: ");
    scanf("%s", branch);

    printf("\n--- Student Details ---\n");
    printf("Name   : %s\n", name);
    printf("Roll No: %d\n", roll);
    printf("Branch : %s\n", branch);

    return 0;
}
