/*
 * GL Bajaj Summer Assignment — Day 29
 * Problem : Menu-driven array operations
 * Author  : Kishan Nishad
 */
#include <stdio.h>

#define MAX 100
int arr[MAX], n = 0;

void input() {
    printf("Size: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) { printf("arr[%d]: ", i); scanf("%d", &arr[i]); }
}
void display() { printf("Array: "); for (int i = 0; i < n; i++) printf("%d ", arr[i]); printf("\n"); }
void findMax() { int m = arr[0]; for (int i = 1; i < n; i++) if (arr[i] > m) m = arr[i]; printf("Max = %d\n", m); }
void findSum() { long long s = 0; for (int i = 0; i < n; i++) s += arr[i]; printf("Sum = %lld, Avg = %.2f\n", s, (double)s/n); }
void sortArr() {
    for (int i = 0; i < n-1; i++) for (int j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1]) { int t = arr[j]; arr[j]=arr[j+1]; arr[j+1]=t; }
    printf("Sorted.\n");
}

int main() {
    int c;
    printf("=== Array Operations ===\n");
    do {
        printf("\n1.Input  2.Display  3.Max  4.Sum/Avg  5.Sort  6.Exit\nChoice: ");
        scanf("%d", &c);
        switch(c) { case 1:input(); break; case 2:display(); break; case 3:findMax(); break;
                    case 4:findSum(); break; case 5:sortArr(); break; case 6:printf("Bye!\n"); break; }
    } while(c != 6);
    return 0;
}
