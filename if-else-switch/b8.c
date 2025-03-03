#include<stdio.h>
#include<math.h>
int main(){
	double a, b, c, C, S;
	scanf(" %lf %lf %lf", &a, &b, &c);
	C = a + b + c;
	S = sqrt(C/2 * (C/2 - a) * (C/2 - b) * (C/2 - c));
	if(a==b&&a==c){
	    printf("TG deu");
	    printf("C = %lf\nS = %.2lf", C, S);
    } 
	else if(a + b > c && a + c > b && b + c >a){
		printf("C = %lf\nS = %.2lf", C, S);
		if(pow(a,2) + pow (b, 2) == pow (c,2)||pow(a,2) + pow (c, 2) == pow (b,2)||pow(c,2) + pow (b, 2) == pow (a,2)){
			if( a==b||a==c||b==c) printf("TG vuong can");
			else printf(" TG vuong");
		}
		else if( a==b||a==c||b==c)printf("TG can");
		else printf("TG thuong");
    }
	else printf("Khong phai TG");
	return 0;
		
	}
