#include <stdio.h>

int main() {
    int a, s=0;
    for(int i=0; i<10; i++)
    {
        scanf("%d", &a);
        s=s+a;
    }
    printf("%d", s);
    return 0;
}
