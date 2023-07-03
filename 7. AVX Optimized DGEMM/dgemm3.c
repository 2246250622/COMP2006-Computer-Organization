#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>

void dgemm(int n, double *A, double *B, double *C)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            double cij = C[i * n + j];
            for (int k = 0; k < n; k++)
                cij += A[k + i * n] * B[j + k * n];
            C[j + i * n] = cij;
        }
}

void initialize(int n, double *X)
{
    int i;
    for (i = 0; i < n; i++)
        X[i] = (double)rand() / (double)RAND_MAX;
}

int main()
{
    int n;
    printf("Enter the matrix width: ");
    scanf("%d", &n);
    double *A = (double *)malloc(n * n * sizeof(double));
    double *B = (double *)malloc(n * n * sizeof(double));
    double *C = (double *)malloc(n * n * sizeof(double));
    srand(1);
    initialize(n * n, A);
    initialize(n * n, B);
    memset(C, 0, n * n * sizeof(double));
    struct timeval st, et;
    gettimeofday(&st, NULL);

    dgemm(n, A, B, C);
    gettimeofday(&et, NULL);

    float elapsed = ((float)(et.tv_sec - st.tv_sec)) + (float)(et.tv_usec - st.tv_usec) * 0.000001f;

    printf("Calculation time for %d x %d matrix: %0.6f seconds\n", n, n, elapsed);
    return 0;
}
