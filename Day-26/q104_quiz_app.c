/*
 * GL Bajaj Summer Assignment — Day 26
 * Problem : Quiz application
 * Author  : Kishan Nishad
 */
#include <stdio.h>
#include <string.h>

int main() {
    char answers[3] = {'B', 'C', 'A'};
    char *questions[] = {
        "Q1. What is the output of printf(\"%d\", 5/2) in C?\n  A) 2.5  B) 2  C) 3  D) Error",
        "Q2. Which loop is guaranteed to execute at least once?\n  A) for  B) while  C) do-while  D) None",
        "Q3. What does scanf return on successful read of 1 integer?\n  A) 1  B) 0  C) -1  D) The value read"
    };
    int score = 0;
    char ans;
    printf("=== C Programming Quiz ===\n\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\nYour answer: ", questions[i]);
        scanf(" %c", &ans);
        if (ans == answers[i] || ans + 32 == answers[i] + 32) {
            printf("Correct!\n\n"); score++;
        } else printf("Wrong. Correct: %c\n\n", answers[i]);
    }
    printf("Score: %d/3\n", score);
    return 0;
}
