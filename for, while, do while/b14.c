#include <stdio.h>
int main()
{
	int nam;
	double gdp, n2014, r;
	nam = 2014;
	printf("GDP nam 2014: ");
	scanf("%lf", &n2014);
	printf("toc do tang truong trung binh: ");
	scanf("%lf", &r);
	printf("Nam\t GDP\n");
	gdp = n2014;
	do{
		
		printf("%d\t", nam);
		printf("%lf\n", gdp);
		gdp = gdp*(1+r/100);
		nam++;
	}while(gdp<=2*n2014);
	
	return 0;
}
