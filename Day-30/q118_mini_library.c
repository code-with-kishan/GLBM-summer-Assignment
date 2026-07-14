/*
 * GL Bajaj Summer Assignment — Day 30
 * Problem : Mini library system
 * Author  : Kishan Nishad
 */
#include <stdio.h>
#include <string.h>

#define MAX 20

typedef struct {
    int id;
    char title[60];
    char author[40];
    char category[20];
    int available;
} Book;

Book lib[MAX];
int count = 0;

void addBook() {
    if (count >= MAX) { printf("Library full.\n"); return; }
    Book *b = &lib[count];
    b->id = count + 1;
    printf("Title: "); fgets(b->title, 60, stdin); b->title[strcspn(b->title,"\n")]='\0';
    printf("Author: "); fgets(b->author, 40, stdin); b->author[strcspn(b->author,"\n")]='\0';
    printf("Category: "); fgets(b->category, 20, stdin); b->category[strcspn(b->category,"\n")]='\0';
    b->available = 1;
    printf("Book added (ID: %d)\n", b->id); count++;
}

void searchBook() {
    char key[60]; int found = 0;
    printf("Search: "); fgets(key, 60, stdin); key[strcspn(key,"\n")]='\0';
    for (int i = 0; i < count; i++)
        if (strstr(lib[i].title, key) || strstr(lib[i].author, key)) {
            printf("ID:%d | %s by %s [%s] - %s\n",
                   lib[i].id, lib[i].title, lib[i].author, lib[i].category,
                   lib[i].available ? "Available" : "Issued");
            found = 1;
        }
    if (!found) printf("No results.\n");
}

void issueBook() {
    int id; printf("Book ID: "); scanf("%d", &id); getchar();
    for (int i = 0; i < count; i++)
        if (lib[i].id == id) {
            if (lib[i].available) { lib[i].available = 0; printf("Issued.\n"); }
            else printf("Not available.\n");
            return;
        }
    printf("Book not found.\n");
}

void returnBook() {
    int id; printf("Book ID: "); scanf("%d", &id); getchar();
    for (int i = 0; i < count; i++)
        if (lib[i].id == id) { lib[i].available = 1; printf("Returned.\n"); return; }
    printf("Not found.\n");
}

void displayAll() {
    printf("\n%-5s %-35s %-20s %-12s %s\n", "ID","Title","Author","Category","Status");
    printf("--------------------------------------------------------------------------\n");
    for (int i = 0; i < count; i++)
        printf("%-5d %-35s %-20s %-12s %s\n", lib[i].id, lib[i].title, lib[i].author,
               lib[i].category, lib[i].available ? "Available" : "Issued");
}

int main() {
    int c;
    printf("=== Mini Library System ===\n");
    do {
        printf("\n1.Add  2.Search  3.Issue  4.Return  5.Display  6.Exit\nChoice: ");
        scanf("%d", &c); getchar();
        switch(c){case 1:addBook();break;case 2:searchBook();break;case 3:issueBook();break;
                  case 4:returnBook();break;case 5:displayAll();break;case 6:printf("Bye!\n");break;}
    } while(c != 6);
    return 0;
}
