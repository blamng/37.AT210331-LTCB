#include <stdio.h>
int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld + %lld = %lld\n", a, b, a + b);
    printf("%lld - %lld = %lld\n", a, b, a - b);
    printf("%lld * %lld = %lld\n", a, b, a * b);
    if(b==0) printf("Khong hop le");
    else{
      if(a%b==0) printf("%lld", a/b);
      else printf("%lld chia %lld bang %lld du %lld", a, b, a/b, a%b);
    }
    return 0;
}
