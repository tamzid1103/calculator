#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void addition()
{
    float a, b;
    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the second number: ");
    scanf("%f", &b);

    system("cls");
    printf("Addition Result: %.3f\n", a + b);
}

void subtract()
{
    float a, b;
    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the second number: ");
    scanf("%f", &b);

    system("cls");
    printf("Subtraction Result: %.3f\n", a - b);
}

void multiply()
{
    float a, b;
    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the second number: ");
    scanf("%f", &b);

    system("cls");
    printf("Multiplication Result: %.3f\n", a * b);
}
void division()
{
    float a, b;
    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the second number: ");
    scanf("%f", &b);

    if (b == 0)
    {
        system("cls");
        printf("Error: Division by zero is not allowed.\n");
    }
    else
    {
        system("cls");
        printf("Division Result: %.3f\n", a / b);
    }
}
void sine()
{
    float angle;
    printf("Enter angle in degrees: ");
    scanf("%f", &angle);
    float rad = angle * (3.1416 / 180);
    printf("Result: %.3f\n", sin(rad));
}
void cosine()
{
    float angle;
    printf("Enter angle in degrees: ");
    scanf("%f", &angle);
    float rad = angle * (3.1416 / 180);
    printf("Result: %.3f\n", cos(rad));
}
void ln()
{
    float a;
    printf("Enter number: ");
    scanf("%f", &a);
    if(a <= 0)
    printf("Invalid input!\n");
    else
    printf("ln Result: %.3f\n", log(a));
}
void log_base_10()
{
    float a;
    printf("Enter number: ");
    scanf("%f", &a);
    if(a <= 0)
    printf("Invalid input!\n");
    else
    printf("log10 Result: %.3f\n", log10(a));
}

int main()
{

    int choice;

    while (1)
    {

        printf("\nAvailable Operations:\n");
        printf("1. Addition \n");
        printf("2. Subtraction \n");
        printf("3. Multiplication \n");
        printf("4. Division \n");
        printf("5. Sine \n");
        printf("6. Cosine \n");
        printf("7. ln \n");
        printf("8. log10 \n");
        printf("9. Exit \n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        system("cls");

        switch (choice)
        {
        case 1:
            addition();
            break;

        case 2:
            subtract();
            break;

        case 3:
            multiply();
            break;

        case 4:
            division();
            break;

        case 5:
            sine();
            break;

        case 6:
            cosine();
            break;

        case 7:
            ln();
            break;

        case 8:
            log_base_10();
            break;

        case 9:
            printf("Thank You for using our calculator ! ");
            exit(0);

        } // switch ending

    } // While ending

    return 0;
}