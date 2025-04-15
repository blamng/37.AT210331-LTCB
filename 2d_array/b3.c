#include <stdio.h>

int main() 
{
    int m, p, n;

    printf("Nhap so hang cua ma tran A (m): ");
    scanf("%d", &m);

    printf("Nhap so cot cua ma tran A (p) = so hang cua B: ");
    scanf("%d", &p);

    printf("Nhap so cot cua ma tran B (n): ");
    scanf("%d", &n);

    int A[m][p], B[p][n], C[m][n];

    
    printf("Nhap ma tran A (%dx%d):\n", m, p);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
            scanf("%d", &A[i][j]);

 
    printf("Nhap ma tran B (%dx%d):\n", p, n);
    for (int i = 0; i < p; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &B[i][j]);

   
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            C[i][j] = 0;

   
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < p; k++)
                C[i][j] += A[i][k] * B[k][j];

    
    printf("Ma tran A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }

    printf("Ma tran B:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", B[i][j]);
        printf("\n");
    }

    printf("Ma tran tich C = A x B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}
