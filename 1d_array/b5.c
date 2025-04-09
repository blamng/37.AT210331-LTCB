#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	do{
		printf("nhap n: ");
		scanf("%d", &n);
		if(n<=0) printf("nhap lai n\n");
	} while(n<=0);
	double a[n];
	for(int i=0; i<n; i++)
	    scanf("%lf", &a[i]);
	double x;
	printf("nhap x: ");
	scanf("%lf", &x);
	int dem=0;
	for(int i=0; i<n; i++)
	{
		if(fabs(a[i] - x) < 1e-6) dem++;
	}
	printf("so lan x xuat hien trong mang: %d", dem);
	return 0;
}
