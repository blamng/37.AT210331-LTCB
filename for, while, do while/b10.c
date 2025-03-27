#include <stdio.h>
int main()
{
	int n, f1, f2, tmp;
	printf("Nhap n: ");
	scanf("%d", &n);
	if(n <= 0)
	{
		printf("vui long nhap so nguyen duong");
		return 0;
	}
	f1 = 1, f2 = 1;
	if(n==1 || n==2)
	{
		printf("f(%d) bang 1", n);
		return 0;
	}
	for (int i=3; i<=n; i++)
	{
		tmp = f1 + f2;
		f1 = f2;
		f2 = tmp;		
	}
	printf("f(%d) la: %d", n, tmp);
	return 0;
}
