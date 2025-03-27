#include <stdio.h>
int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	double s;
	for(int i=1; i<=n; i++)
	{
		s += 1.0/i;
	}
	printf("Tong la: %lf", s);
	return 0;
}
