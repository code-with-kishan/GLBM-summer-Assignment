/*
 * GL Bajaj Summer Assignment — Day 28
 * Problem : Library management system
 * Author  : Kishan Nishad
 */
#include <stdio.h>
#include <string.h>

#define MAX 20

typedef struct { int id; char title[60]; char author[40]; int available; } Book;

int main() {
    Book lib[MAX];
    int count = 0, choice;
    printf("=== Library Management System ===\n");
    do {
        printf("\n1. Add Book  2. Issue Book  3. Return Book  4. Display  5. Exit\nChoice: ");
        scanf("%d", &choice); getchar();
        if (choice == 1 && count < MAX) {
            lib[count].id = count + 1;
            printf("Title: "); fgets(lib[count].title, 60, stdin);
            lib[count].title[strcspn(lib[count].title, "\n")] = '\0';
            printf("Author: "); fgets(lib[count].author, 40, stdin);
            lib[count].author[strcspn(lib[count].author, "\n")] = '\0';
            lib[count].available = 1;
            printf("Book added (ID: %d)\n", lib[count].id);
            count++;
        } else if (choice == 2) {
            int id; printf("Book ID to issue: "); scanf("%d", &id);
            for (int i = 0; i < count; i++)
                if (lib[i].id == id) {
                    if (lib[i].available) { lib[i].available = 0; printf("Issued.\n"); }
                    else printf("Not available.\n");
                    break;
                }
        } else if (choice == 3) {
            int id; printf("Book ID to return: "); scanf("%d", &id);
            for (int i = 0; i < count; i++)
                if (lib[i].id == id) { lib[i].available = 1; printf("Returned.\n"); break; }
        } else if (choice == 4) {
            printf("\n%-5s %-40s %-25s %s\n", "ID","Title","Author","Status");
            for (int i = 0; i < count; i++)
                printf("%-5d %-40s %-25s %s\n", lib[i].id, lib[i].title, lib[i].author,
                       lib[i].available ? "Available" : "Issued");
        }
    } while (choice != 5);
    return 0;
}
