#include <stdio.h>
#include <math.h>
int main()
{
	double x, eps;
	printf("nhap x: ");
	scanf("%lf", &x);
	printf("nhap eps: ");
	scanf("%lf", &eps);
	double s = 1;
	double a = 1;
	int n=1;
	do{
		a = a*x/n;
		n++;
		s += a;
	}while(fabs(a)>=eps);
	
	printf("e mu x = %.5lf", s);
	return 0;
}
