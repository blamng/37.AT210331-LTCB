#include <stdio.h>
float pi = 3.14;
int main() {
    double r;
    scanf("%lf", &r);
    printf("Dien tich: %lf\n", 4 * pi * r * r);
    printf("The tich: %lf\n", (4 / 3) * pi * r * r * r);
    return 0;
}
