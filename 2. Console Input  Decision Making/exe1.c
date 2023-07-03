#include <stdio.h>

int main()
{
    int n;
    int status;
    float total = 0.0f;
    int i =0;
    float avg;

    printf("AVERAGE\nPlease input ten integers\n");

    for (; i < 10; i++)
    {
        status = scanf("%d", &n);

        if (status != 1)
            break;

        total = total + n;
        avg = total / (i+1);
        printf("Average: %.2f\n", avg);

    }

    return 0;
}