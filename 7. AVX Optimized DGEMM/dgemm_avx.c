#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <string.h>
#include <immintrin.h>

void dgemm_avx(int n, double *A, double *B, double *C)
{
    int i, j, k;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j += 4)
        {
            __m256d c0 = _mm256_load_pd(C + i * n + j);
            for (k = 0; k < n; k++)
            {
                __m256d vA = _mm256_broadcast_sd(A + k + i * n);
                __m256d vB = _mm256_load_pd(B + j + k * n);
                __m256d vC = _mm256_mul_pd(vA, vB);
                c0 = _mm256_add_pd(c0, vC);
            }

            _mm256_store_pd(C + j + i * n, c0);
        }
}

void initialize(int n, double *X)
{
    int i;
    for (i = 0; i < n * n; i++)
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
    initialize(n, A);
    initialize(n, B);
    memset(C, 0, n * n * sizeof(double));

    struct timeval st, et;
    gettimeofday(&st, NULL);

    dgemm_avx(n, A, B, C);

    gettimeofday(&et, NULL);

    float elapsed = ((float)(et.tv_sec - st.tv_sec)) + (float)(et.tv_usec - st.tv_usec) * 0.000001f;

    printf("Calculation time for %d x %d matrix: %0.6f seconds\n", n, n, elapsed);
    return 0;
}