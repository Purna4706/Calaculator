#include <stdio.h>
#include <math.h>

// Function prototypes
void add(float, float);
void subtract(float, float);
void multiply(float, float);
void divide(float, float);
void square(float);
void cube(float);
void inverse(float);

int main() {
    int choice;
    float num1, num2;

    while (1) {
        // Displaying menu
        printf("\nSimple Calculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Square of a number\n");
        printf("6. Cube of a number\n");
        printf("7. Inverse of a number\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Switch case to perform the respective operation
        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                add(num1, num2);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                subtract(num1, num2);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                multiply(num1, num2);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                if (num2 != 0) {
                    divide(num1, num2);
                } else {
                    printf("Error! Division by zero.\n");
                }
                break;

            case 5:
                printf("Enter a number: ");
                scanf("%f", &num1);
                square(num1);
                break;

            case 6:
                printf("Enter a number: ");
                scanf("%f", &num1);
                cube(num1);
                break;

            case 7:
                printf("Enter a number: ");
                scanf("%f", &num1);
                inverse(num1);
                break;
             
	

            case 8:
                printf("Exiting the program.\n");
                return 0;
               
	    
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

// Function to add two numbers
void add(float a, float b) {
    printf("Result: %.2f + %.2f = %.2f\n", a, b, a + b);
}

// Function to subtract two numbers
void subtract(float a, float b) {
    printf("Result: %.2f - %.2f = %.2f\n", a, b, a - b);
}

// Function to multiply two numbers
void multiply(float a, float b) {
    printf("Result: %.2f * %.2f = %.2f\n", a, b, a * b);
}

// Function to divide two numbers
void divide(float a, float b) {
    printf("Result: %.2f / %.2f = %.2f\n", a, b, a / b);
}

// Function to calculate the square of a number
void square(float a) {
    printf("Square of %.2f = %.2f\n", a, a * a);
}

// Function to calculate the cube of a number
void cube(float a) {
    printf("Cube of %.2f = %.2f\n", a, a * a * a);
}
void quadraple(float a) {
	printf("quadraple of %.2f = %.2f\n",a,a*a*a*a);

// Function to calculate the inverse of a number
void inverse(float a) {
    if (a != 0) {
        printf("Inverse of %.2f = %.2f\n", a, 1 / a);
    } else {
        printf("Error! Inverse of zero is undefined.\n");
    }
}

