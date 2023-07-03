#include <stdio.h>
#include <sys/time.h>

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

int main()
{
    int i, j, n = 4;
    double A[] = {1, 2, 3, 4, 2, 3, 4, 5, 3, 4, 5, 6, 4, 5, 6, 7};
    double B[] = {1, 2, 3, 4, 2, 3, 4, 5, 3, 4, 5, 6, 4, 5, 6, 7};
    double C[16] = {0};
    struct timeval st, et;
    gettimeofday(&st, NULL);
    dgemm(n, A, B, C);
    gettimeofday(&et, NULL);
    float elapsed = ((float)(et.tv_sec - st.tv_sec)) + (float)(et.tv_usec - st.tv_usec) * 0.000001f;
    printf("Calculation time for %d x %d matrix: %0.6f seconds\n", n, n, elapsed);
    return 0;
}
