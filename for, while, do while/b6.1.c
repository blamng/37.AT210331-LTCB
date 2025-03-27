#include <stdio.h>
#include <cstdlib>
int main()
{
	long long a, b;
	scanf("%lld %lld", &a, &b);
	if (a==0||b==0)
	{
		long long gcd = (a == 0)? b : a;
		printf("UCLN la: %lld\n", gcd);
		printf("khong co BCNN\n");
		exit(0);
	}
	long long gcd = (a < b)? a : b;
	while(gcd)
	{
		if(a % gcd ==0 && b % gcd == 0)
		    break;
		gcd--;
	}
	printf("UCLN la: %lld\n", gcd);
	long long lcm = (a/gcd)*b;
	printf("BCNN la: %lld\n", lcm);
	return 0;
}
