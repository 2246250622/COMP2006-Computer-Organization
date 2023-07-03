#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate;
    int years;
    printf("AMOUNT ON DEPOSIT\nPlease input the principal, rate, and no. of years:\n");
    int result1 = scanf("%f", &principal);
    int result2 = scanf("%f", &rate);
    int result3 = scanf("%d", &years);

    printf("year\tAmount on deposit\n");
    for(int i=1; i<=years; i++) {
        printf("%4d\t%14.2f\n", i, principal * pow(rate + 1, i));
    }

    return 0;
}