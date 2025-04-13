#include <stdio.h>

int main()
{
	double a, b;
	double *p;
	
	printf("Nhap a, b: ");
	scanf("%lf %lf", &a, &b);
	
	double tmp = a;

	p = &a;
	*p = b;
	
	p = &b;
	*p = tmp;
	
	printf("Sau khi hoan doi: %.2lf %.2lf", a, b);
	return 0;
	
}
