#include <stdio.h>

void dgemm(int n, double *A, double *B, double *C)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            double cij = C[i * n + j];
            for (int k = 0; k < n; k++)
                cij += A[i * n + k] * B[k * n + j];
            C[i * n + j] = cij;
        }
}

void main()
{
    int i, j, n = 4;
    double A[] = {1, 2, 3, 4, 2, 3, 4, 5, 3, 4, 5, 6, 4, 5, 6, 7};
    double B[] = {1, 2, 3, 4, 2, 3, 4, 5, 3, 4, 5, 6, 4, 5, 6, 7};
    double C[16] = {0};
    dgemm(n, A, B, C);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%.0lf\t", C[i * n + j]);
        printf("\n");
    }
}
