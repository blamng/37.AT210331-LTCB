#include <stdio.h>
int main()
{
	int n;
	long long giaithua = 1;
	printf("Nhap n: ");
	scanf("%d", &n);
	if(n<0)
	{
	   printf("vui long nhap so khong am");
	   return 0;
        }
        for(int i=1; i<=n; i++)
		giaithua *= i;
	printf("%d! bang : %lld", n, giaithua);
}
