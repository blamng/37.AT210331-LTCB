#include <stdio.h>

long long giaithua(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * giaithua(n - 1); 
}

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Khong tinh duoc giai thua cua so am.\n");
    else
        printf("%d! = %lld\n", n, giaithua(n));

    return 0;
}
