// My first mini project as a simple calculator. Date: 9/02/2025
// Alert!. This is a simple calculator which operats only one operator at a time and only valid for 2 numbers at a time.

#include <stdio.h>
#include <stdlib.h> // For system() function
#include <math.h>   // for sqrt(),cbrt(),pow() function

// function to print operators choices
void printfoperator()
{
    // ask user to enter operator
    printf("\nAlert: This is a simple calculator that operats one operator at a time and works for two numbers only.\n ");
    printf("\nOperator Menu:\n");
    printf("\nEnter '+' for Addition \n");
    printf("Enter '-' for subtraction\n");
    printf("Enter '*' for Multiplication\n");
    printf("Enter '/' for Division\n");
    printf("Enter '%%' for percentage\n");
    printf("Enter 'r' or 'R' for Square root \n");
    printf("Enter 'c' or 'C' for cube root \n");
    printf("Enter 'p' or 'P' for Exponentiation\n");
    printf("Enter 'm' or 'M' for matrix\n");
    printf("Enter 'E' or 'e' to exit\n\n");
    printf("Enter the operator(Defined above):");
}

void validscanf_int()
{while(1){
    
}
}

void perform_addition()
{
}

// Function for square root
void squareroot()
{
    printf("you are calculating Squareroot\n");
    float num;
    printf("\nEnter the number: ");
    scanf("%f", &num);
    if (num > 0)
    {
        printf("\nThe square root of %.2f is %.2f\n", num, sqrt(num));
    }
    else if (num == 0)
    {
        printf("\nThe square root of 0 is 0\n");
    }
    else
    {
        printf("\nThe square root of a neative integer is not defined.\n");
    }
}


// Function for cube root
void cuberoot()
{
    printf("you are calculating Cuberoot\n");
    float num;
    printf("\nEnter a number to find its cuberoot: ");
    scanf("%f", &num);
    printf("\nThe cube root of %.2f is %.2f\n", num, cbrt(num));
}

// Function for exponentiation
void power()
{
    printf("you are calculating power\n");
    float a, b;
    printf("\nEnter the First number(Base Number): ");
    scanf("%f", &a);
    printf("\nEnter the Second number(Exponent/power): ");
    scanf("%f", &b);
    if (a == 0 && b < 0)
    {
        printf("\nThe value of 0 raised to negative power is undefined.\n");
    }
    else if (a == 0 && b == 0)
    {
        printf("\nThe value of 0 raised to 0 is an indeterminate form and is undefined.\n");
    }
    else
    {
        printf("\nThe value of %.2f ^ %.2f = %.2f\n", a, b, pow(a, b));
    }
}

// Function for percentage calculation
void percentage()
{
    printf("you are calculating Percentage\n");
    int check_condition; // This will check condition for 1 or 2.
    float num1, num2;
    printf("\nChoose the percentage calculation \n");
    printf("1.Enter '1' to calculate percentage of a number(i.e,50 percent of 100 is 50)\n");
    printf("2.Enter '2' to calculate what percent of a number of another number(i.e,what percentage of 50 is of 100)\n");
    printf("\nEnter the number '1' or '2': ");
    scanf("%d", &check_condition);

    while (check_condition != 1 && check_condition != 2)
    // this will prevent from invalid input, ask user untill a valid input is not entered.
    {
        printf("\nInvalid input!. Please enter 1 or 2 to continue calculation: ");
        printf("\nEnter the number '1' or '2': ");
        scanf("%d", &check_condition);
    }

    if (check_condition == 1 || check_condition == 2)
    {
        system("cls");
    }

    if (check_condition == 1)
    {
        printf("Now you are calculating percentage of a number(i.e,50 percent of 100 is 50)\n");
        printf("\nEnter the parcentage: ");
        scanf("%f", &num1);
        printf("Enter the total number: ");
        scanf("%f", &num2);
        while (num2 == 0)
        {
            printf("\nThe Total number cannot be zero.");
            printf("\nEnter a valid number: ");
            scanf("%f", &num2);
        }
        printf("\n%.2f%% of %.2f = %.2f\n", num1, num2, ((num1 * num2) / 100));
    }
    else if (check_condition == 2)
    {
        printf("Now you are calculating what percent of a number of another number(i.e,what percentage of 50 is of 100)\n");
        printf("\nEnter the first number(part): ");
        scanf("%f", &num1);
        printf("Enter the second number(Whole/Total): ");
        scanf("%f", &num2);
        for (; num2 == 0;)
        {
            printf("\nThe Total number cannot be zero.");
            printf("\nEnter a valid number: ");
            scanf("%f", &num2);
        }
        printf("\n%.2f is the %.2f%% of %.2f\n", num1, ((num1 / num2) * 100), num2);
    }
}

// function for matrix
void matrix()
{
    printf("you are calculating Matrix\n");
    int choice; // select choice
    printf("\nNote: you can do three basic operations on matrix: Addition, Subtraction, Multiplication(Of different dimensions also)");
    printf("\n1. Enter '1' for Addition");
    printf("\n2. Enter '2' for Subtraction");
    printf("\n3. Enter '3' for Multliplication\n");
    printf("\nEnter option: ");
    scanf("%d", &choice);

    // this loop check user enter valid input or not
    while (choice != 1 && choice != 2 && choice != 3)
    {
        printf("Invalid choice: Please enter 1, 2 or 3 to proceed\n");
        printf("\nEnter option: ");
        scanf("%d", &choice);
    }

    if (choice == 1 || choice == 2 || choice == 3)
    {
        system("cls");
    }

    if (choice == 3) // Matrix multiplication
    {
        printf("Now you are calculating Matrix Multiplication\n");
        int row1, row2, colms1, colms2;
        // input for 1st matrix dimensions
        printf("\nREMAINDER: When you go for matrix multiplication, make sure that the number of COLUMNS in MATRIX 1 must be equal to the number of ROWS in MATRIX 2\n");
        printf("\nEnter the number of rows for 1st matrix: ");
        scanf("%d", &row1);
        printf("Enter the number of colmumns for 1st matrix: ");
        scanf("%d", &colms1);

        int matrix1[row1][colms1];
        printf("\nEnter the Elements of 1st matrix (%d*%d) \n", row1, colms1);
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < colms1; j++)
            {
                printf("Elements at position [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &matrix1[i][j]);
            }
        }

        // print 1st matrix
        printf("\nThe first matrix is: \n\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < colms1; j++)
            {
                printf("%d\t", matrix1[i][j]);
            }
            printf("\n\n");
        }

        // input for 2st matrix dimensions
        printf("\nEnter the number of rows for 2st matrix: ");
        scanf("%d", &row2);
        printf("Enter the number of colmumns for 2st matrix: ");
        scanf("%d", &colms2);

        // Matrix multiplication condition
        if (colms1 != row2)
        {
            printf("\nMatrix multiplication is not possible. The number of columns in matrix 1 must be equal to the number of rows in matrix 2.\n");
            return;
        }

        int matrix2[row2][colms2];
        printf("\nEnter the Elements of 2st matrix (%d*%d) \n", row2, colms2);
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < colms2; j++)
            {
                printf("Elements at position [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &matrix2[i][j]);
            }
        }

        // print 2nd matrix
        printf("\nThe second matrix is: \n\n");
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < colms2; j++)
            {
                printf("%d\t", matrix2[i][j]);
            }
            printf("\n\n");
        }

        // result matrix dimensions
        int result[row1][colms2];

        // Matrix multiplication (holds the results)
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < colms2; j++)
            {
                result[i][j] = 0; // Initialize result matrix element
                for (int k = 0; k < colms1; k++)
                {
                    result[i][j] += matrix1[i][k] * matrix2[k][j]; // Sum of products
                }
            }
        }

        // Print the product of matrix
        printf("\nThe product of these two matrix is: \n\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < colms2; j++)
            {
                printf("%d\t", result[i][j]);
            }
            printf("\n\n");
        }
    }
    else
    {
        if (choice == 1)
        {
            printf("Now you are calculating Matrix Addition\n");
        }
        else
        {
            printf("Now you are calculating Matrix Subtraction\n");
        }
        // Matrix operations for addition and subtraction
        int rows, colms;
        printf("\nEnter the number of rows: ");
        scanf("%d", &rows);
        printf("Enter the number of columns: ");
        scanf("%d", &colms);

        int matrix1[rows][colms], matrix2[rows][colms], sum[rows][colms], sub[rows][colms];
        printf("\nEnter the Elements of 1st matrix (%d*%d) \n", rows, colms);
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < colms; j++)
            {
                printf("Elements at position [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &matrix1[i][j]); // hold elements of 1st matrix
            }
        }
        printf("\nEnter the elements of 2nd matrix(%d*%d) \n", rows, colms);
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < colms; j++)
            {
                printf("Elements at position [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &matrix2[i][j]); // holds elements of 2nd matrix
            }
        }

        // print 1st matrix
        printf("\nThe first matrix is: \n\n");
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < colms; j++)
            {
                printf("%d\t", matrix1[i][j]);
            }
            printf("\n\n");
        }

        // print 2nd matrix
        printf("\nThe second matrix is: \n\n");
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < colms; j++)
            {
                printf("%d\t", matrix2[i][j]);
            }
            printf("\n\n");
        }

        // Holds elements for sum of these two matrix
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < colms; j++)
            {
                sum[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

        // Holds elements for difference of these two matrix
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < colms; j++)
            {
                sub[i][j] = matrix1[i][j] - matrix2[i][j];
            }
        }

        if (choice == 1)
        {
            // print sum
            printf("\nThe sum of these two matrix is: \n\n");
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < colms; j++)
                {
                    printf("%d\t", sum[i][j]);
                }
                printf("\n\n");
            }
        }
        else if (choice == 2)
        {
            // print difference
            printf("\nThe difference of these two matrix is: \n\n");
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < colms; j++)
                {
                    printf("%d\t", sub[i][j]);
                }
                printf("\n\n");
            }
        }
    }
}

// Main function
int main()
{
    char operators;
    float num1, num2;
    char continue_calculation;

    do
    {
        printfoperator();
        scanf(" %c", &operators);
        if (operators == 'e' || operators == 'E')
        {
            system("cls");
            printf("\nExiting the program. ");
            printf("\nThank you!\n");
            return 0;
        }
        while (operators != '+' && operators != '-' && operators != '*' && operators != '/' && operators != '%' && operators != 'r' && operators != 'R' && operators != 'c' && operators != 'C' && operators != 'p' && operators != 'P' && operators != 'm' && operators != 'M' && operators != 'E' && operators != 'e')
        // this will ckeck user input correct operator or not, if not asking untill valid operstor is entered.

        {
            printf("\nInvalid operator.");
            printf("\nEnter the operator(Defined above): ");
            scanf(" %c", &operators);
        }

        if (operators == '+' || operators == '-' || operators == '*' || operators == '/' || operators == '%' || operators == 'r' || operators == 'R' || operators == 'c' || operators == 'C' || operators == 'p' || operators == 'P' || operators == 'm' || operators == 'M')
        {
            system("cls");
        }

        switch (operators)
        {
        case 'r':
        case 'R':
            squareroot();
            break;
        case 'p':
        case 'P':
            power();
            break;

        case 'c':
        case 'C':
            cuberoot();
            break;

        case '%':
            percentage();
            break;

        case 'm':
        case 'M':
            matrix();
            break;

        default:

            // If the operation is +, -, *, /

            printf("Enter the first number: ");
            scanf("%f", &num1);
            printf("Enter the second number: ");
            scanf("%f", &num2);
        }

        switch (operators)
        {
        case '+':
            printf("\nThe addition of %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("\nThe subtraction of  %.2f - %.2f =  %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("\nThe multiplication of  %.2f * %.2f =  %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) // this will prevent division by 0;
            {
                printf("\nThe division of %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            }
            else
            {
                printf("\nError: Division by zero undefined. Please enter other number.\n");
            }
            break;
        }

        // Ask user to continue for next calculation
        printf("\nDo you want to continue further calculation(y/n): ");
        scanf(" %c", &continue_calculation);

        while (continue_calculation != 'y' && continue_calculation != 'Y' && continue_calculation != 'n' && continue_calculation != 'N')
        // check untill user enter valid character, when ask for further calculation.
        {
            printf("\nInvalid Input!.Please enter 'y' to continue and 'n' to stop: ");
            scanf(" %c", &continue_calculation);
        }
        // Clear console if user choose to continue for next calculation.
        if (continue_calculation == 'y' || continue_calculation == 'Y')
        {
            system("cls"); // windows specific.
        }
        else
        {
            system("cls");
            printf("\nExiting the program. ");
            printf("\nThank you!\n"); // stop calculation and exit from loop and also from this program.
        }
    } while (continue_calculation == 'y' || continue_calculation == 'Y');

    return 0;
}

//------------------------------------------------------------------------------------------------
// void calculator(char *operators, float *num1, float *num2)
// {

//     if (*operators == '+')
//     {
//         printf("The addition of %.2f + %.2f = %.2f\n", *num1, *num2, *num1 + *num2);
//     }
//     else if (*operators == '-')
//     {
//         printf("The substraction of %.2f - %.2f = %.2f\n", *num1, *num2, *num1 - *num2);
//     }
//     else if (*operators == '*')
//     {
//         printf("The multiplication of %.2f * %.2f = %.2f\n", *num1, *num2, *num1 * *num2);
//     }
//     else if (*operators == '/')
//     {
//         if (*num2 != 0) // this will prevent division by 0;
//         {
//             printf("The division of %.2f / %.2f = %.2f\n", *num1, *num2, *num1 / *num2);
//         }
//         else
//         {
//             printf("Division by zero is not allowed!");
//         }
//     }
//     else
//     {
//         printf("Invalid operator!");
//     }
// }
//--------------------------------------------------------------------------------------------------
// void calculator(char operators, float num1, float num2)
// {

//     if (operators == '+')
//     {
//         printf("The addition of %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
//     }
//     else if (operators == '-')
//     {
//         printf("The substraction of %.2f + %.2f = %.2f\n", num1, num2, num1 - num2);
//     }
//     else if (operators == '*')
//     {
//         printf("The multiplication of %.2f + %.2f = %.2f\n", num1, num2, num1 * num2);
//     }
//     else if (operators == '/')
//     {
//         if (num2 != 0) // this will prevent division by 0;
//         {
//             printf("The division of %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
//         }
//         else
//         {
//             printf("Division by zero is not allowed!");
//         }
//     }
//     else
//     {
//         printf("Invalid operator!");
//     }
// }
//---------------------------------------------------------------------------------------------
// if (operators == '+')
// {
//     printf("The addition of %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
// }
// else if (operators == '-')
// {
//     printf("The substraction of %.2f + %.2f = %.2f\n", num1, num2, num1 - num2);
// }
// else if (operators == '*')
// {
//     printf("The multiplication of %.2f + %.2f = %.2f\n", num1, num2, num1 * num2);
// }
// else if (operators == '/')
// {
//     if (num2 != 0) // this will prevent division by 0;
//     {
//         printf("The division of %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
//     }
//     else
//     {
//         printf("Division by zero is not allowed!");
//     }
// }
// else{
//     printf("Invalid operator!");
// }
// return 0;

//-----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------