#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 

    int a[n][n]; 
    int num = 1;
    int layers = n / 2; 

   
    for (int k = 0; k < layers; k++) {
        
        for (int j = k; j <= n - 1 - k; j++) {
            a[k][j] = num++;
        }
        
        for (int i = k + 1; i <= n - 1 - k; i++) {
            a[i][n - 1 - k] = num++;
        }
        
        for (int j = n - 2 - k; j >= k; j--) {
            a[n - 1 - k][j] = num++;
        }
        
        for (int i = n - 2 - k; i >= k + 1; i--) {
            a[i][k] = num++;
        }
    }

    
    if (n % 2 == 1) {
        a[n / 2][n / 2] = num;
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}
