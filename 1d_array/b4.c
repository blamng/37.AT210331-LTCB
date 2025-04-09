#include<stdio.h>
int main()
{
	int n;
	do{
		printf("nhap n: ");
		scanf("%d", &n);
		if(n<=0) printf("nhap lai n\n");
	} while(n<=0);
	double a[n];
	for(int i=0; i<n; i++)
	   scanf("%lf", &a[i]);
	double max = a[0];
	double min = a[0];
	int m_max = 0, m_min = 0;
	for(int i=0; i<n; i++)
	{
		if(a[i]>max)
		{
			max = a[i];
			m_max = i;
		}

	    if(a[i]<min)
	    {
	    	min = a[i];
	    	m_min = i;
		}
    }
	printf("Max = %lf\n", max);
	printf("vi tri max: %d\n", m_max);
	printf("Min = %lf\n", min);
	printf("vi tri min: %d\n", m_min);
	return 0;
}
