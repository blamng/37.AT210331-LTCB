#include <stdio.h>
#include <stdlib.h>


void mergeArrays(int *a, int m, int *b, int n, int *c) {
    int i = 0, j = 0, k = 0;
   
    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
 
    while (i < m) {
        c[k++] = a[i++];
    }
 
    while (j < n) {
        c[k++] = b[j++];
    }
}

int main() {
    int m, n;
    printf("Nhap so phan tu mang A: ");
    scanf("%d", &m);
    int *A = malloc(m * sizeof(int));
    printf("Nhap %d phan tu mang A (da sap xep tang dan):\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &A[i]);
    }

    printf("\nNhap so phan tu mang B: ");
    scanf("%d", &n);
    int *B = malloc(n * sizeof(int));
    printf("Nhap %d phan tu mang B (da sap xep tang dan):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }

  
    int *C = malloc((m + n) * sizeof(int));
    mergeArrays(A, m, B, n, C);


    printf("\nMang C (ket qua merge):\n");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

   
    free(A);
    free(B);
    free(C);
    return 0;
}
