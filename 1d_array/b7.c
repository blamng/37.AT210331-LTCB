#include <stdio.h>
int main()
{
	int n;
	do{
		printf("nhap n: ");
		scanf("%d", &n);
		if(n<=0) printf("nhap lai n\n");
	}while(n<=0);
	
	double a[n];
	for(int i=0; i < n; i++)
	   scanf("%lf", &a[i]);
	   
	for(int i=0; i<n; i++)
	{
		int i_min = i;
		for(int j = i+1; j < n; j++)
		{
			if(a[i_min] > a[j]) i_min = j;
			
		}
		if(i_min != i)
		{
			double tmp = a[i];
			a[i] = a[i_min];
			a[i_min] = tmp;
			
		}
		    
	
	}
			
	for(int i=0; i < n; i++)
		printf("%.2lf ", a[i]);
	return 0;
}
