#include <stdio.h>
int main()
{
	long long n, dem = 0;
	printf("Nhap so can ktra: ");
	scanf("%lld", &n);
	if(n <=0 )
	{
	    printf("vui long nhap so nguyen duong\n");
	    return 0;
    }
    for(int i = 1; i <= n/2 ; i++)
	{
		if(n % i == 0) dem = dem + i;
	}
	if(dem + n == 2*n) printf("%lld la so hoan hao", n);
	else printf("%lld khong phai so hoan hao", n);
	return 0;
}
