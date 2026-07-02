/*
 * GL Bajaj Summer Assignment — Day 26
 * Problem : ATM simulation
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    double balance = 10000.0;
    int pin = 1234, entered, choice;
    double amount;
    printf("=== ATM Machine ===\nEnter PIN: ");
    scanf("%d", &entered);
    if (entered != pin) { printf("Wrong PIN. Access denied.\n"); return 1; }
    printf("Access granted!\n");
    do {
        printf("\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: printf("Balance: Rs. %.2f\n", balance); break;
            case 2:
                printf("Amount to deposit: ");
                scanf("%lf", &amount);
                if (amount > 0) { balance += amount; printf("Deposited. New balance: Rs. %.2f\n", balance); }
                break;
            case 3:
                printf("Amount to withdraw: ");
                scanf("%lf", &amount);
                if (amount > balance) printf("Insufficient balance.\n");
                else { balance -= amount; printf("Withdrawn. New balance: Rs. %.2f\n", balance); }
                break;
            case 4: printf("Thank you!\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 4);
    return 0;
}
