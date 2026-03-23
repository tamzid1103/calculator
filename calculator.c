#include <stdio.h>
#include <stdlib.h>

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
void squareroot()
{
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    if (num < 0)
    {
        system("cls");
        printf("Error: Cannot calculate.\n");
    }
    else
    {
        system("cls");
        printf("Square Root Result: %.3f\n", sqrt(num));
    }
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
        printf("5. Square Root \n");
        printf("6. Exit \n");

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
            squareroot();
            break;

        case 6:
            printf("Thank You for using our calculator ! ");
            exit(0);

        } // switch ending

    } // While ending

    return 0;
}