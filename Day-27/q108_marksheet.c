/*
 * GL Bajaj Summer Assignment — Day 27
 * Problem : Marksheet generation system
 * Author  : Kishan Nishad
 */
#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    int roll;
    float marks[5], total = 0;
    char *subjects[] = {"Maths", "Physics", "Chemistry", "English", "CS"};
    printf("=== Marksheet Generator ===\n");
    printf("Student Name: "); fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("Roll Number: "); scanf("%d", &roll);
    for (int i = 0; i < 5; i++) {
        printf("%s marks (out of 100): ", subjects[i]);
        scanf("%f", &marks[i]);
        total += marks[i];
    }
    float avg = total / 5;
    char grade = avg >= 90 ? 'A' : avg >= 75 ? 'B' : avg >= 60 ? 'C' : avg >= 45 ? 'D' : 'F';
    printf("\n========= MARKSHEET =========\n");
    printf("Name: %-20s  Roll: %d\n", name, roll);
    printf("-----------------------------\n");
    for (int i = 0; i < 5; i++) printf("%-12s: %.1f\n", subjects[i], marks[i]);
    printf("-----------------------------\n");
    printf("Total: %.1f / 500\nAverage: %.2f\nGrade: %c\nResult: %s\n",
           total, avg, grade, avg >= 45 ? "PASS" : "FAIL");
    return 0;
}
