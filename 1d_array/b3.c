#include <stdio.h>
int main()
{
        int n;
        do{
        printf("Nhap n: ");
	    scanf("%d", &n);
	    if(n<=0) printf("nhap lai n");
	} while(n<=0);

	int a[n];
	for(int i=0; i<n; i++)
	    scanf("%d", &a[i]);
	int s=0, u = 0, v = 0, dem = 0, d = 0;
	for(int i=0; i<n; i++)
	{
		s += a[i];
		if(a[i]>0)
		{
			dem++;
			u += a[i];
		}
		else if(a[i]<0) 
		{
			d++;
			v += a[i];
		}
	}
	printf("Tong tat ca cac so: %d\n", s);
	printf("Tong tat ca cac so nguyen duong: %d\n", u);
	printf("Tong tat ca cac so nguyen am: %d\n", v);
	if(dem>0)
	    printf("TBC cac so nguyen duong: %.5f\n", 1.0*u/dem);
	else
	    printf("TBC cac so nguyen duong: 0");
	if(d>0)
	     printf("TBC cac so nguyen am: %f\n", 1.0*v/d);
	else
	    printf("TBC cac so nguyen am: 0\n");
	return 0;
	
}
