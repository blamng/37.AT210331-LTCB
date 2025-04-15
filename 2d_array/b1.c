#include <stdio.h>

void printMatran(int a[3][3])
{
    printf("Ma tran 3x3:\n");
    int i;
    for (i = 0; i < 3; i++) {
    	int j;
        for (j = 0; j < 3; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    
    int a[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    printf("* TH1: Ma tran khai bao san\n");
    printMatran(a);

    
    int b[3][3];
    printf("\n* TH2: Nhap gia tri cho ma tran 3x3 \n");
    int i;
    for (i = 0; i < 3; i++) 
	{
    	int j;
        for (j = 0; j < 3; j++) 
		{
            printf("Nhap b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printMatran(b);

    return 0;
}
