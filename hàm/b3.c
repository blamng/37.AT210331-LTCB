#include <stdio.h>

long long fibonacci(int n)
{
	if(n==1) return 0;
	if(n==2) return 1;
	
	return fibonacci(n-1) + fibonacci(n-2);

}

int main()
{
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	
	printf("f(%d) bang %lld", n, fibonacci(n));
	return 0;
}
