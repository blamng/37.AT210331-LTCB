#include <stdio.h>
#include <string.h>

struct MatHang {
    char ten[100];
    int dongia;
    int soluong;
    int thanhtien;
};


void swap(struct MatHang *a, struct MatHang *b) {
    struct MatHang tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int n;
    printf("Nhap so mat hang: ");
    scanf("%d", &n);
    getchar(); 

    struct MatHang ds[n];

    for (int i = 0; i < n; i++) {
        printf("\nMat hang %d:\n", i + 1);
        printf("Ten hang: ");
        fgets(ds[i].ten, sizeof(ds[i].ten), stdin);
        ds[i].ten[strcspn(ds[i].ten, "\n")] = 0; 

        printf("Don gia: ");
        scanf("%d", &ds[i].dongia);

        printf("So luong: ");
        scanf("%d", &ds[i].soluong);
        getchar(); 

        ds[i].thanhtien = ds[i].dongia * ds[i].soluong;
    }

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(ds[i].ten, ds[j].ten) > 0) {
                swap(&ds[i], &ds[j]);
            }
        }
    }


    printf("\n%-5s %-15s %-10s %-10s %-10s\n", "STT", "Ten Hang", "Don gia", "So luong", "Thanh tien");
    int tongtien = 0;
    for (int i = 0; i < n; i++) {
        printf("%-5d %-15s %-10d %-10d %-10d\n", i + 1, ds[i].ten, ds[i].dongia, ds[i].soluong, ds[i].thanhtien);
        tongtien += ds[i].thanhtien;
    }
    printf("%42s %-10d\n", "Tong tien", tongtien);

    return 0;
}
