/*
 * GL Bajaj Summer Assignment — Day 27
 * Problem : Salary management system
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    int n;
    printf("=== Salary Management System ===\n");
    printf("Enter number of employees: ");
    scanf("%d", &n);
    double basic[n], hra[n], da[n], gross[n], tax[n], net[n];
    char name[n][50];
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d name: ", i + 1); scanf("%s", name[i]);
        printf("Basic salary: "); scanf("%lf", &basic[i]);
        hra[i] = 0.2 * basic[i];
        da[i]  = 0.15 * basic[i];
        gross[i] = basic[i] + hra[i] + da[i];
        tax[i] = (gross[i] > 30000) ? 0.1 * gross[i] : 0;
        net[i] = gross[i] - tax[i];
    }
    printf("\n%-15s %-10s %-10s %-10s %-10s %-10s\n", "Name","Basic","HRA","DA","Gross","Net");
    printf("---------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++)
        printf("%-15s %-10.2f %-10.2f %-10.2f %-10.2f %-10.2f\n",
               name[i], basic[i], hra[i], da[i], gross[i], net[i]);
    return 0;
}
