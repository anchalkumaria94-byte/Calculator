#include <stdio.h>
#include <stdlib.h>

void add(float a, float b) { printf("Result: %.2f\n", a + b); }
void subtract(float a, float b) { printf("Result: %.2f\n", a - b); }
void multiply(float a, float b) { printf("Result: %.2f\n", a * b); }
void divide(float a, float b) {
    if (b != 0) printf("Result: %.2f\n", a / b);
    else printf("Error: Division by zero!\n");
}

int main() {
    int choice;
    float num1, num2;

    while (1) {
        printf("\n--- Simple Calculator ---\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) break;

        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch (choice) {
            case 1: add(num1, num2); break;
            case 2: subtract(num1, num2); break;
            case 3: multiply(num1, num2); break;
            case 4: divide(num1, num2); break;
            default: printf("Invalid choice!\n");
        }
    }

    printf("Calculator closed.\n");
    return 0;
}