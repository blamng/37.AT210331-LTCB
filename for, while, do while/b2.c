#include<stdio.h>
#include<math.h>
int main()
{
	double n;
	scanf("%lf", &n);
	if(n != (long long)n)
	   printf("%lf khong phai snt", n);
	else 
	{
		long long m = (long long)n;
		if(m == 2 || m == 3) printf("%lld la snt", m);
		else if(m>3){
			int dem = 0;
			long long cm = sqrt(m);
			for(int i = 2; i <= cm ; i++){
				if(m % i ==0){
					dem++;
				    break;
				} 
			}
			if(dem ==0) printf("%lld la snt", m);
			else printf("%lld khong la snt", m);
		}
		else printf("%lld khong phai snt", m);
	}
	return 0;
}
