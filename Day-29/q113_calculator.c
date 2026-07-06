/*
 * GL Bajaj Summer Assignment — Day 29
 * Problem : Menu-driven calculator
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    double a, b;
    int choice;
    printf("=== Menu-Driven Calculator ===\n");
    do {
        printf("\n1.Add  2.Subtract  3.Multiply  4.Divide  5.Modulo  6.Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice >= 1 && choice <= 5) {
            printf("Enter two numbers: "); scanf("%lf %lf", &a, &b);
        }
        switch (choice) {
            case 1: printf("Result = %.2f\n", a + b); break;
            case 2: printf("Result = %.2f\n", a - b); break;
            case 3: printf("Result = %.2f\n", a * b); break;
            case 4:
                if (b == 0) printf("Division by zero!\n");
                else printf("Result = %.4f\n", a / b); break;
            case 5:
                if (b == 0) printf("Division by zero!\n");
                else printf("Result = %d\n", (int)a % (int)b); break;
            case 6: printf("Exiting.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 6);
    return 0;
}
