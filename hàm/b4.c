#include <stdio.h>
#define MAX 100

void nhapmatran(int a[MAX][MAX], int m, int n)
{
	
	int i;
	for(i=0; i<m; i++)
	{
		int j;
		for(j=0; j<n; j++)
		{
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void inmatran(int a[MAX][MAX], int m, int n)
{
	
	int i;
	for(i=0; i<m; i++)
	{
		int j;
		for(j=0; j<n; j++)
		
			printf("%d\t", a[i][j]);
		
	printf("\n");
	}
}

void tong2matran(int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX], int m, int n)
{

	int i;
	for(i = 0; i < m; i++)
	{
		int j;
		for(j = 0; j < n; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			
		}
	
	}
}

void tich2matran(int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX], int m, int n, int p)
{
	
	int i;
	for(i = 0; i < m; i++)
	{
		int j;
		for(j=0; j < p; j++)
		{
			int k;
			c[i][j] = 0;
			for(k = 0; k < n; k++)
			    c[i][j] += a[i][k]*b[k][j];
			
			
			
		}
	
	}
}

int main()
{
	int m, n, p;
	int a[MAX][MAX], b[MAX][MAX], c1[MAX][MAX], c2[MAX][MAX];
	
	printf("Nhap so hang va cot cua ma tran a: ");
	scanf("%d %d", &m, &n);
	
	printf("Nhap so cot cua ma tran b (co %d hang): ", n);
	scanf("%d", &p);
	
	printf("Nhap ma tran a:\n");
	nhapmatran(a, m, n);
	
	printf("Nhap ma tran b:\n");
	nhapmatran(b, n, p);
	
	printf("Ma tran a la:\n");
	inmatran(a, m, n);
	
	printf("Ma tran b la:\n");
	inmatran(b, n, p);
	
	printf("tich 2 ma tran a va b la:\n");
	tich2matran(a, b, c2, m, n, p);
	inmatran(c2, m, p);
	
	if(m == n && n == p)
	{
	    printf("tong 2 ma tran a va b la:\n");
		tong2matran(a, b, c1, m, n);
		inmatran(c1, m, n);
	}
	else printf("khong the tinh tong");
	
	return 0;
}
