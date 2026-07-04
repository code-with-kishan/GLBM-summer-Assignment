/*
 * GL Bajaj Summer Assignment — Day 27
 * Problem : Student record management system
 * Author  : Kishan Nishad
 */
#include <stdio.h>
#include <string.h>

#define MAX 50

typedef struct {
    int rollNo;
    char name[50];
    float marks;
    char grade;
} Student;

char getGrade(float m) {
    if (m >= 90) return 'A';
    if (m >= 75) return 'B';
    if (m >= 60) return 'C';
    if (m >= 45) return 'D';
    return 'F';
}

int main() {
    Student s[MAX];
    int n;
    printf("=== Student Record System ===\n");
    printf("Enter number of students: ");
    scanf("%d", &n); getchar();
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: "); scanf("%d", &s[i].rollNo); getchar();
        printf("Name: "); fgets(s[i].name, 50, stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';
        printf("Marks: "); scanf("%f", &s[i].marks);
        s[i].grade = getGrade(s[i].marks);
    }
    printf("\n%-10s %-20s %-10s %s\n", "Roll No", "Name", "Marks", "Grade");
    printf("--------------------------------------------\n");
    for (int i = 0; i < n; i++)
        printf("%-10d %-20s %-10.2f %c\n", s[i].rollNo, s[i].name, s[i].marks, s[i].grade);
    return 0;
}
