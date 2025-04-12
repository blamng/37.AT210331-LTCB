#include <stdio.h>

double pow_s(double x, int y)
{
	double r =1;
	if(x==0 && y <= 0)
	{
		printf("khong xac dinh\n");
		return 0;
	}
	if(y==0) return r;
	int e = (y<0)? -y : y;
	int i=0;
	for(i=0; i<e; i++)
	    r *= x;
	
	return (y<0)? 1.0/r : r;
}

int main()
{
	double x;
	int y;
	printf("nhap x, y: ");
	scanf("%lf %d", &x, &y);
	double kq = pow_s(x, y);
	if(!(x==0 && y<=0))
	   printf("%lf mu %d bang %lf", x, y, kq);

	return 0;
}
