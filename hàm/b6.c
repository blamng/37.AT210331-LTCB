#include <stdio.h>
#include <math.h>

#define MAX 100

void nhapHeSo(float heSo[], int *bac, char ten) {
    printf("Nhap bac cua da thuc %c: ", ten);
    scanf("%d", bac);
    int i;
    for ( i = 0; i <= *bac; i++) {
        printf("He so x^%d: ", i);
        scanf("%f", &heSo[i]);
    }
}

void inDaThuc(float heSo[], int bac) {
	int i;
    for (i = bac; i >= 0; i--) {
        if (heSo[i] != 0) {
            if (i != bac && heSo[i] > 0)
                printf(" + ");
            if (i == 0)
                printf("%.2f", heSo[i]);
            else if (i == 1)
                printf("%.2fx", heSo[i]);
            else
                printf("%.2fx^%d", heSo[i], i);
        }
    }
    printf("\n");
}

void tongDaThuc(float A[], int bacA, float B[], int bacB, float T[], int *bacT) {
    *bacT = (bacA > bacB) ? bacA : bacB;
    int i;
    for (i = 0; i <= *bacT; i++) {
        T[i] = 0;
        if (i <= bacA)
            T[i] += A[i];
        if (i <= bacB)
            T[i] += B[i];
    }
}

float giaTriDaThuc(float heSo[], int bac, float x) {
    float sum = 0;
    int i;
    for (i = 0; i <= bac; i++) {
        sum += heSo[i] * pow(x, i);
    }
    return sum;
}

int main() {
    float P[MAX], Q[MAX], T[MAX];
    int bacP, bacQ, bacT;
    float x;

 
    nhapHeSo(P, &bacP, 'P');
    nhapHeSo(Q, &bacQ, 'Q');

  
    tongDaThuc(P, bacP, Q, bacQ, T, &bacT);

   
    printf("\nDa thuc P(x): ");
    inDaThuc(P, bacP);
    printf("Da thuc Q(x): ");
    inDaThuc(Q, bacQ);
    printf("Tong T(x) = P(x) + Q(x): ");
    inDaThuc(T, bacT);

  
    printf("\nNhap gia tri x: ");
    scanf("%f", &x);

    printf("P(%.2f) = %.2f\n", x, giaTriDaThuc(P, bacP, x));
    printf("Q(%.2f) = %.2f\n", x, giaTriDaThuc(Q, bacQ, x));
    printf("T(%.2f) = %.2f\n", x, giaTriDaThuc(T, bacT, x));

    return 0;
}
