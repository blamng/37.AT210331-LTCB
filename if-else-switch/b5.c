#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c;
	if(a==0) printf("day la pt bac nhat\n");
	else{
		float d = b*b - 4*a*c;
		if(d<0) printf("pt khong co nghiem thuc");
		else if(d>0){
			float x1 = (-b + sqrt(d))/(2*a);
			float x2= -b/a - x1;
			printf("x1 = %.2f ; x2 = %.2f", x1, x2);
		}
		else{
			float x = -b/(2*a);
			printf("nghiem kep x = %.2f", x);
		}
		return 0;
	}
}
