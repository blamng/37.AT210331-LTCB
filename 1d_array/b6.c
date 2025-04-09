#include<stdio.h>
int main()
{
	int n;
	do{
		printf("nhap n: ");
		scanf("%d", &n);
		if(n<=0) printf("nhap lai n\n");
	}while(n<=0);
	double a[n];
	for(int i=0; i<n; i++)
	{
	   scanf("%lf", &a[i]);
	   if(a[i]<0) a[i]=0;
    }
    for(int i=0; i<n; i++)
       printf("%.2lf ", a[i]);
    return 0;
}
