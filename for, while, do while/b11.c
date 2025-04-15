#include <stdio.h>
#include <stdlib.h>

void printBaseIter(unsigned int n, int base) {
    const char digits[] = "0123456789ABCDEF";
    char buf[32];    
    int i = 0;

    if (n == 0) {
        putchar('0');
        return;
    }

    while (n > 0) {
        buf[i++] = digits[n % base];
        n /= base;
    }
  
    while (i-- > 0) {
        putchar(buf[i]);
    }
}

int main() {
    unsigned int n;
    printf("Nhap so nguyen duong n: ");
    if (scanf("%u", &n) != 1) {
        fprintf(stderr, "Gia tri khong hop le!\n");
        return 1;
    }

    printf("Co so 2:   ");
    printBaseIter(n, 2);
    putchar('\n');

    printf("Co so 8:   ");
    printBaseIter(n, 8);
    putchar('\n');

    printf("Co so 16:  ");
    printBaseIter(n, 16);
    putchar('\n');

    return 0;
}
