/*
 * GL Bajaj Summer Assignment — Day 06
 * Problem : Convert binary to decimal
 * Author  : Kishan Nishad
 */
#include <stdio.h>
#include <math.h>

int main() {
    long long bin;
    int dec = 0, i = 0;
    printf("Enter binary number: ");
    scanf("%lld", &bin);
    long long temp = bin;
    while (temp) { dec += (temp % 10) * (int)pow(2, i++); temp /= 10; }
    printf("Decimal of %lld = %d\n", bin, dec);
    return 0;
}
