/*
 * GL Bajaj Summer Assignment — Day 28
 * Problem : Bank account system
 * Author  : Kishan Nishad
 */
#include <stdio.h>
#include <string.h>

typedef struct {
    int accNo;
    char name[50];
    double balance;
} Account;

int main() {
    Account a;
    int choice; double amount;
    printf("=== Bank Account System ===\n");
    printf("Account Number: "); scanf("%d", &a.accNo); getchar();
    printf("Account Holder: "); fgets(a.name, 50, stdin);
    a.name[strcspn(a.name, "\n")] = '\0';
    printf("Initial Deposit: "); scanf("%lf", &a.balance);
    do {
        printf("\n1. Deposit  2. Withdraw  3. Balance  4. Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Amount: "); scanf("%lf", &amount);
                a.balance += amount;
                printf("New Balance: Rs. %.2f\n", a.balance); break;
            case 2:
                printf("Amount: "); scanf("%lf", &amount);
                if (amount > a.balance) printf("Insufficient funds.\n");
                else { a.balance -= amount; printf("New Balance: Rs. %.2f\n", a.balance); }
                break;
            case 3: printf("Balance: Rs. %.2f\n", a.balance); break;
            case 4: printf("Goodbye!\n"); break;
            default: printf("Invalid.\n");
        }
    } while (choice != 4);
    return 0;
}
