#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	double A, S;
	printf("nhap so tien gui vao: ");
	scanf("%lf", &A);
	printf("so thang gui tien: ");
	scanf("%d", &n);
	
	S = A * pow(1+0.45/100, n);
	
	printf("so tien nhan duoc sau %d thang: %.3lf", n ,S);
	return 0;
}
