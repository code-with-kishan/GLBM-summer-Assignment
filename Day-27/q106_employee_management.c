/*
 * GL Bajaj Summer Assignment — Day 27
 * Problem : Employee management system
 * Author  : Kishan Nishad
 */
#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    char dept[30];
    double salary;
} Employee;

int main() {
    int n;
    printf("=== Employee Management System ===\n");
    printf("Enter number of employees: ");
    scanf("%d", &n); getchar();
    Employee emp[n];
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: "); scanf("%d", &emp[i].id); getchar();
        printf("Name: "); fgets(emp[i].name, 50, stdin);
        emp[i].name[strcspn(emp[i].name, "\n")] = '\0';
        printf("Dept: "); fgets(emp[i].dept, 30, stdin);
        emp[i].dept[strcspn(emp[i].dept, "\n")] = '\0';
        printf("Salary: "); scanf("%lf", &emp[i].salary);
    }
    printf("\n%-8s %-20s %-15s %s\n", "ID", "Name", "Department", "Salary");
    printf("----------------------------------------------------------\n");
    for (int i = 0; i < n; i++)
        printf("%-8d %-20s %-15s %.2f\n", emp[i].id, emp[i].name, emp[i].dept, emp[i].salary);
    return 0;
}
