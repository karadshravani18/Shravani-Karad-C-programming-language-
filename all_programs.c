/*
 * C Programming - Mid Semester Exam
 * All nine programs combined in one file (3 per unit).
 * Choose a program number from the menu to run it.
 *
 * Compile: gcc all_programs.c -o all_programs
 * Run    : ./all_programs
 */
#include <stdio.h>

#define PI 3.14159

/* ---------------- UNIT I : Introduction ---------------- */

/* U1-Q1: Accept a student's name, roll number and branch, then display the details */
void unit1_q1_student_details(void)
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
}

/* U1-Q2: Accept two integers and display sum, difference, product and quotient */
void unit1_q2_arithmetic(void)
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Sum        = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product    = %d\n", a * b);
    if (b != 0)
        printf("Quotient   = %.2f\n", (float)a / b);
    else
        printf("Quotient   = undefined (division by zero)\n");
}

/* U1-Q3: Accept the radius of a circle and calculate its area */
void unit1_q3_circle_area(void)
{
    float radius, area;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    printf("Area of the circle = %.2f\n", area);
}

/* ---------------- UNIT II : Decision Making and Looping ---------------- */

/* U2-Q1: Check whether a year is a leap year (if - else if - else) */
void unit2_q1_leap_year(void)
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
        printf("%d is a leap year.\n", year);
    else if (year % 100 == 0)
        printf("%d is not a leap year.\n", year);
    else if (year % 4 == 0)
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);
}

/* U2-Q2: Check whether a number is prime (for loop with break) */
void unit2_q2_prime_number(void)
{
    int n, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
        isPrime = 0;

    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
}

/* U2-Q3: Display the day name using a number (1-7) using switch */
void unit2_q3_day_name_switch(void)
{
    int day;

    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    switch (day)
    {
        case 1: printf("Monday\n");    break;
        case 2: printf("Tuesday\n");   break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n");  break;
        case 5: printf("Friday\n");    break;
        case 6: printf("Saturday\n");  break;
        case 7: printf("Sunday\n");    break;
        default: printf("Invalid input! Enter a number between 1 and 7.\n");
    }
}

/* ---------------- UNIT III : Array ---------------- */

/* U3-Q1: Calculate the sum of all elements of an array */
void unit3_q1_array_sum(void)
{
    int arr[100], n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of all elements = %d\n", sum);
}

/* U3-Q2: Find the largest element in an array */
void unit3_q2_largest_element(void)
{
    int arr[100], n, i, largest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    largest = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }

    printf("Largest element = %d\n", largest);
}

/* U3-Q3: Perform matrix addition (2-D array) */
void unit3_q3_matrix_addition(void)
{
    int A[10][10], B[10][10], C[10][10];
    int r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of matrix A:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of matrix B:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &B[i][j]);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            C[i][j] = A[i][j] + B[i][j];

    printf("Resultant matrix (A + B):\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d\t", C[i][j]);
        printf("\n");
    }
}

/* ---------------- MAIN MENU ---------------- */

int main()
{
    int choice;

    do
    {
        printf("\n========== C PROGRAMS MENU ==========\n");
        printf("UNIT I\n");
        printf("  1. Student details\n");
        printf("  2. Sum, difference, product, quotient\n");
        printf("  3. Area of a circle\n");
        printf("UNIT II\n");
        printf("  4. Leap year (if - else if)\n");
        printf("  5. Prime number (for loop)\n");
        printf("  6. Day name (switch)\n");
        printf("UNIT III\n");
        printf("  7. Sum of array elements\n");
        printf("  8. Largest element in array\n");
        printf("  9. Matrix addition\n");
        printf("  0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice)
        {
            case 1: unit1_q1_student_details();  break;
            case 2: unit1_q2_arithmetic();       break;
            case 3: unit1_q3_circle_area();      break;
            case 4: unit2_q1_leap_year();        break;
            case 5: unit2_q2_prime_number();     break;
            case 6: unit2_q3_day_name_switch();  break;
            case 7: unit3_q1_array_sum();        break;
            case 8: unit3_q2_largest_element();  break;
            case 9: unit3_q3_matrix_addition();  break;
            case 0: printf("Exiting...\n");      break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while (choice != 0);

    return 0;
}
