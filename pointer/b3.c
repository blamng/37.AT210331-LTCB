#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int a[n], *min, *max;

    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);

        if (i == 0) min = max = &a[i];
        else {
            if (a[i] > *max) max = &a[i];
            if (a[i] < *min) min = &a[i];
        }
    }

    printf("Max: %d\n", *max);
    printf("Min: %d\n", *min);
    return 0;
}
