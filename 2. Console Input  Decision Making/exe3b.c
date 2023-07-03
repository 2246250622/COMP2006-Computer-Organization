#include <stdio.h>
int main()
{
    for (int i = 1; i < 8; i++)
    {
        for (int j = 0; j < i; j++)
            printf("*");
        for(int j=0; j<7-i; j++)
            printf("#");
        printf("\n");
    }

    return 0;
}