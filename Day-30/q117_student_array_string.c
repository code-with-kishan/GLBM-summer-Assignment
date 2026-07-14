/*
 * GL Bajaj Summer Assignment — Day 30
 * Problem : Student record system using arrays and strings
 * Author  : Kishan Nishad
 */
#include <stdio.h>
#include <string.h>

#define MAX 30

int main() {
    char names[MAX][50];
    int roll[MAX];
    float marks[MAX][5];
    int n;
    char *subjects[] = {"Maths", "Physics", "Chemistry", "English", "CS"};

    printf("=== Student Record System ===\n");
    printf("Enter number of students: ");
    scanf("%d", &n); getchar();

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Roll: "); scanf("%d", &roll[i]); getchar();
        printf("Name: "); fgets(names[i], 50, stdin);
        names[i][strcspn(names[i],"\n")] = '\0';
        for (int j = 0; j < 5; j++) {
            printf("%s marks: ", subjects[j]);
            scanf("%f", &marks[i][j]);
        }
    }

    printf("\n%-5s %-20s", "Roll", "Name");
    for (int j = 0; j < 5; j++) printf(" %-10s", subjects[j]);
    printf(" %-8s %s\n", "Total", "Grade");
    printf("----------------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        float total = 0;
        printf("%-5d %-20s", roll[i], names[i]);
        for (int j = 0; j < 5; j++) { printf(" %-10.1f", marks[i][j]); total += marks[i][j]; }
        float avg = total / 5;
        char grade = avg>=90?'A':avg>=75?'B':avg>=60?'C':avg>=45?'D':'F';
        printf(" %-8.1f %c\n", total, grade);
    }
    return 0;
}
