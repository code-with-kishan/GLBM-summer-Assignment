/*
 * GL Bajaj Summer Assignment — Day 30
 * Problem : Mini employee management system
 * Author  : Kishan Nishad
 */
#include <stdio.h>
#include <string.h>

#define MAX 30

typedef struct {
    int id;
    char name[50];
    char dept[30];
    double basic;
    double gross;
    double net;
} Emp;

Emp emp[MAX];
int count = 0;

double calcGross(double b) { return b + 0.2*b + 0.15*b; }
double calcNet(double gross) { return gross - (gross > 30000 ? 0.1*gross : 0); }

void addEmp() {
    if (count >= MAX) return;
    Emp *e = &emp[count];
    e->id = count + 1;
    printf("Name: "); scanf("%s", e->name);
    printf("Dept: "); scanf("%s", e->dept);
    printf("Basic: "); scanf("%lf", &e->basic);
    e->gross = calcGross(e->basic);
    e->net = calcNet(e->gross);
    printf("Added (ID: %d)\n", e->id); count++;
}

void searchEmp() {
    int id; printf("ID: "); scanf("%d", &id);
    for (int i = 0; i < count; i++)
        if (emp[i].id == id) {
            printf("Name: %s | Dept: %s | Basic: %.2f | Gross: %.2f | Net: %.2f\n",
                   emp[i].name, emp[i].dept, emp[i].basic, emp[i].gross, emp[i].net);
            return;
        }
    printf("Not found.\n");
}

void displayAll() {
    printf("%-5s %-20s %-15s %-10s %-10s %s\n","ID","Name","Dept","Basic","Gross","Net");
    for (int i = 0; i < count; i++)
        printf("%-5d %-20s %-15s %-10.2f %-10.2f %.2f\n",
               emp[i].id, emp[i].name, emp[i].dept, emp[i].basic, emp[i].gross, emp[i].net);
}

int main() {
    int c;
    printf("=== Mini Employee Management ===\n");
    do {
        printf("\n1.Add  2.Search  3.Display  4.Exit\nChoice: ");
        scanf("%d", &c);
        switch(c){case 1:addEmp();break;case 2:searchEmp();break;case 3:displayAll();break;case 4:printf("Done!\n");break;}
    } while(c != 4);
    return 0;
}
