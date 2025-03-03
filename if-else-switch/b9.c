#include<stdio.h>
int main(){
	int m, y, d;
	scanf("%d %d", &m, &y);
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
		d = 31;
	    printf("Thang %d nam %d có %d nay, m, y, d");
    }
    if(m==4||m==6||m==9||m==11){
    	d = 30;
    	printf("Thang %d nam %d có %d nay, m, y, d");
	}
	if(m==2){
		if(y % 4 == 0){
			d = 29;
			printf("Thang %d nam %d có %d nay, m, y, d");
		}
		else{
			d = 28;
			printf("Thang %d nam %d có %d nay, m, y, d");
		}
	}
	return 0;
}
