#include <stdio.h>
long long gt(int n)
{
	long long giaithua = 1;
    for(int i=1; i<=n; i++)
		giaithua *= i;
	return giaithua;
}
int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	if(n<0)
	{
	    printf("vui long nhap so khong am");
	    return 0;
    }
	double s=0;
	for(int i=1; i<=n; i++)	
		s += 1.0/gt(i);	
	printf("Tong la: %lf\n", s);
	return 0;
}
