/*
 * GL Bajaj Summer Assignment — Day 29
 * Problem : Inventory management system
 * Author  : Kishan Nishad
 */
#include <stdio.h>
#include <string.h>

#define MAX 50

typedef struct { int id; char name[50]; int qty; double price; } Item;

int count = 0;
Item inventory[MAX];

void addItem() {
    if (count >= MAX) { printf("Full.\n"); return; }
    Item *it = &inventory[count];
    it->id = count + 1;
    printf("Item name: "); scanf("%s", it->name);
    printf("Qty: "); scanf("%d", &it->qty);
    printf("Price: "); scanf("%lf", &it->price);
    printf("Added (ID: %d)\n", it->id); count++;
}

void display() {
    printf("\n%-5s %-20s %-8s %s\n","ID","Name","Qty","Price");
    for (int i = 0; i < count; i++)
        printf("%-5d %-20s %-8d %.2f\n", inventory[i].id, inventory[i].name, inventory[i].qty, inventory[i].price);
}

void updateQty() {
    int id, qty; printf("Item ID: "); scanf("%d", &id);
    for (int i = 0; i < count; i++)
        if (inventory[i].id == id) {
            printf("New qty: "); scanf("%d", &qty);
            inventory[i].qty = qty; printf("Updated.\n"); return;
        }
    printf("Not found.\n");
}

int main() {
    int c;
    printf("=== Inventory Management ===\n");
    do {
        printf("\n1.Add  2.Display  3.Update Qty  4.Exit\nChoice: ");
        scanf("%d", &c);
        switch(c){case 1:addItem();break;case 2:display();break;case 3:updateQty();break;case 4:printf("Bye!\n");break;}
    } while(c != 4);
    return 0;
}
