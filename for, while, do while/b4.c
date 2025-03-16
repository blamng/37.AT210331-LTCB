#include<stdio.h>
int main()
{
	int s = 0;
	for(int i=1; i <=100; i+=2)
	    s += i;
	printf("%d", s);
	return 0;
}
