#include <stdio.h>


void sort(int* a, int* b, int* c);
void swap(int* x, int* y);

int main() {
    int a, b, c, result;

    result = scanf("%d%d%d", &a, &b, &c);
    if (result < 3) {
        printf("Invalid input!\n");
        return -1;
    } else {
        sort(&a, &b, &c);
        printf("Result: %d < %d < %d\n", a, b, c);
    }

    return 0;
}

void sort(int* a, int* b, int* c) {
    int temp;
    if (*b < *a)
        swap(a, b);
    
    if (*c < *a)
        swap(a, c);
    
    if (*c < *b)
        swap(b, c);
}

void swap(int* x, int* y) {
    int z = *x;
    *x = *y;
    *y = z;
}
