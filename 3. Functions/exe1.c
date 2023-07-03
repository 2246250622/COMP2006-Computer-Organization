#include <stdio.h>

int maximum(int a, int b, int c);

int main()
{
    int a, b, c, result;
    printf("Enter three integers: ");
    result = scanf("%d%d%d", &a, &b, &c);
    if (result == 3) {
        printf("The maximum is: %d\n", maximum(a, b, c));
        return 0;
    } else {
        printf("Invalid inputs\n");
        return -1;
    }
}

int maximum(int a, int b, int c) {
    int max = a;
    if (max < b) max = b;
    if (max < c) max = c;
    return max;
}