#include <stdio.h>

void sort(int *arr, int n)
{
	int *i, *j, tmp;
	for(i = arr; i < arr + n -1; i++)
	{
		for(j = i + 1; j < arr + n; j++)
		{
			if(*i > *j)
			{
				tmp = *i;
				*i = *j;
				*j = tmp;
			}
		}
	}
}

int main()
{
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	
	int a[n];
	int *p;
	
	for(p = a; p < a + n; p++)
	{
		printf("Nhap gia tri: ");
		scanf("%d", p);
	}
	
	sort(a, n);
	
	printf("Mang sau khi sap xep:\n");
	for(p = a; p < a + n; p++)
	{
		
		printf("%d\t", *p);
	}
	
	return 0;
}
