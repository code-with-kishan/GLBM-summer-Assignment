/*
 * GL Bajaj Summer Assignment — Day 26
 * Problem : Voting eligibility system
 * Author  : Kishan Nishad
 */
#include <stdio.h>

int main() {
    char name[100];
    int age;
    printf("=== Voting Eligibility System ===\n");
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("\nName: %s", name);
    if (age >= 18)
        printf("Status: ELIGIBLE to vote.\n");
    else
        printf("Status: NOT eligible. Come back in %d year(s).\n", 18 - age);
    return 0;
}
