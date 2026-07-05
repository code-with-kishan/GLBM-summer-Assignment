/*
 * GL Bajaj Summer Assignment — Day 28
 * Problem : Contact management system
 * Author  : Kishan Nishad
 */
#include <stdio.h>
#include <string.h>

#define MAX 50

typedef struct { char name[50]; char phone[15]; char email[50]; } Contact;

int count = 0;
Contact contacts[MAX];

void add() {
    if (count >= MAX) { printf("Full.\n"); return; }
    printf("Name: "); fgets(contacts[count].name, 50, stdin);
    contacts[count].name[strcspn(contacts[count].name,"\n")] = '\0';
    printf("Phone: "); fgets(contacts[count].phone, 15, stdin);
    contacts[count].phone[strcspn(contacts[count].phone,"\n")] = '\0';
    printf("Email: "); fgets(contacts[count].email, 50, stdin);
    contacts[count].email[strcspn(contacts[count].email,"\n")] = '\0';
    printf("Contact added.\n"); count++;
}

void search() {
    char key[50]; int found = 0;
    printf("Search name: "); fgets(key, 50, stdin); key[strcspn(key,"\n")] = '\0';
    for (int i = 0; i < count; i++)
        if (strstr(contacts[i].name, key)) {
            printf("Name: %s | Phone: %s | Email: %s\n",
                   contacts[i].name, contacts[i].phone, contacts[i].email);
            found = 1;
        }
    if (!found) printf("Not found.\n");
}

void display() {
    if (!count) { printf("No contacts.\n"); return; }
    for (int i = 0; i < count; i++)
        printf("%d. %s | %s\n", i+1, contacts[i].name, contacts[i].phone);
}

int main() {
    int choice;
    printf("=== Contact Management System ===\n");
    do {
        printf("\n1. Add  2. Search  3. Display  4. Exit\nChoice: ");
        scanf("%d", &choice); getchar();
        switch (choice) {
            case 1: add(); break;
            case 2: search(); break;
            case 3: display(); break;
            case 4: printf("Bye!\n"); break;
        }
    } while (choice != 4);
    return 0;
}
