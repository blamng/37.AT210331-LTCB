#include <stdio.h>
#include <math.h>

int main() {
    double x, Eps;
    scanf("%lf %lf", &x, &Eps); 
    double sum = 0;   
    double term = x;    
    int n = 1;          
    
    while (fabs(term) > Eps) {
        sum += term;                           
        term = -term * (x * x) / ((2.0 * n) * (2.0 * n + 1.0));
        n++;                                   
    }
    
    printf("%.10f\n", sum); 
    return 0;
}
