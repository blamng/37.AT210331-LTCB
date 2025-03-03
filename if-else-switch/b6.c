#include<stdio.h>
int main(){
	double a, b, c, d, e, f;
	scanf("%lf &lf %lf &lf %lf %lf", a, b, c, d, e, f);
	double D = a * e - d * b;
	double Dx = c * e - f * b;
	double Dy = a * f - d * c;
	if(D==0)
	{
		if(Dx == 0 && Dy == 0) printf("VN");
		else printf("VSN");
	}
	else{
		double x = D/Dx, y = D/Dy;
		printf("x = %2.lf\ny = %2.lf", x, y);
	}
	return 0;
}
