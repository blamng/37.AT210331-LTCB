#include <stdio.h>

void convert(unsigned int n, int base)
{
	char digit[] = "0123456789ABCDEF";
	
	if(n >= (unsigned)base)
	  convert(n / base, base);
	  
	putchar(digit[n % base]);
}

int main()
{
	unsigned int n;
	printf("Nhap so nguyen duong: ");
	
	if(scanf("%u", &n) != 1)
	{
		fprintf(stderr, "khong hop le");
		return 1;
	}
	
	if(n==0)
	{
		printf("co so 2: 0\n");
		printf("co so 8: 0\n");
		printf("co so 16: 0\n");
		return 0;
	}
	
	
	printf("%d chuyen sang co so 2 la: ", n);
	convert(n, 2);
	putchar('\n');
	
	printf("%d chuyen sang co so 8 la: ", n);
	convert(n, 8);
	putchar('\n');
	
	printf("%d chuyen sang co so 16 la: ", n);
	convert(n, 16);
	putchar('\n');
	
	return 0;
}
