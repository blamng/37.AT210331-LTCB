#include <stdio.h>


int main (){
	
	int a, b;
	
	printf("nhap so hang cua mang :\n");
	scanf("%d",&a);
	
	printf("nhap so cot cua mang :\n");
	scanf("%d",&b);
	
	int m1[a][b];
	int m2[a][b];
	
	printf("nhap mang 1:\n");
	
	
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	printf("nhap mang 2:\n");
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			scanf("%d",&m2[i][j]);
		}
	}
	printf("tong 2 mang la:\n");
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			printf("%d ",m1[i][j]+m2[i][j]);
		}
		printf("\n");
	}
}
