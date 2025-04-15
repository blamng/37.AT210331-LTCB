#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct SinhVien {
    char ho_ten[100];
    int tuoi;
    float diemTB;
} SinhVien;

typedef struct Node {
    SinhVien data;
    struct Node *next;
} Node;


Node* createNode(SinhVien sv) {
    Node *p = (Node*)malloc(sizeof(Node));
    if (!p) {
        printf("Khong du bo nho!\n");
        exit(1);
    }
    p->data = sv;
    p->next = NULL;
    return p;
}


void appendNode(Node **head, SinhVien sv) {
    Node *p = createNode(sv);
    if (*head == NULL) {
        *head = p;
    } else {
        Node *cur = *head;
        while (cur->next) cur = cur->next;
        cur->next = p;
    }
}


void printList(Node *head) {
    printf("\nDANH SACH SINH VIEN\n");
    printf("%-5s %-25s %-6s %-8s\n", "STT", "Ho ten", "Tuoi", "DiemTB");
    int i = 1;
    for (Node *cur = head; cur; cur = cur->next, i++) {
        printf("%-5d %-25s %-6d %-8.2f\n",
               i,
               cur->data.ho_ten,
               cur->data.tuoi,
               cur->data.diemTB);
    }
}


void insertBefore(Node **head, char *tenCanTruoc, SinhVien svMoi) {
    Node *pNew = createNode(svMoi);
    
    if (*head == NULL || strcmp((*head)->data.ho_ten, tenCanTruoc) == 0) {
        pNew->next = *head;
        *head = pNew;
        return;
    }
    
    Node *prev = *head, *cur = (*head)->next;
    while (cur && strcmp(cur->data.ho_ten, tenCanTruoc) != 0) {
        prev = cur;
        cur = cur->next;
    }
    if (cur) {
        
        prev->next = pNew;
        pNew->next = cur;
    } else {
        printf("Khong tim thay sinh vien co ten \"%s\". Khong chen.\n", tenCanTruoc);
        free(pNew);
    }
}


void deleteByName(Node **head, char *tenCanXoa) {
    if (*head == NULL) {
        printf("Danh sach rong, khong the xoa.\n");
        return;
    }
    
    if (strcmp((*head)->data.ho_ten, tenCanXoa) == 0) {
        Node *tmp = *head;
        *head = (*head)->next;
        free(tmp);
        return;
    }
    
    Node *prev = *head, *cur = (*head)->next;
    while (cur && strcmp(cur->data.ho_ten, tenCanXoa) != 0) {
        prev = cur;
        cur = cur->next;
    }
    if (cur) {
        prev->next = cur->next;
        free(cur);
    } else {
        printf("Khong tim thay sinh vien co ten \"%s\". Khong xoa.\n", tenCanXoa);
    }
}

int main() {
    Node *head = NULL;
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    getchar(); 

    
    for (int i = 0; i < n; i++) {
        SinhVien sv;
        printf("\nSinh vien %d:\n", i+1);
        printf(" Ho ten: ");
        fgets(sv.ho_ten, sizeof(sv.ho_ten), stdin);
        sv.ho_ten[strcspn(sv.ho_ten, "\n")] = 0;
        printf(" Tuoi: ");
        scanf("%d", &sv.tuoi);
        printf(" Diem TB: ");
        scanf("%f", &sv.diemTB);
        getchar();

        appendNode(&head, sv);
    }

    
    printList(head);

  
    char tenTruoc[100];
    printf("\n\n--- CHEN THEM SINH VIEN ---\n");
    printf("Nhap ten sinh vien muon chen truoc: ");
    fgets(tenTruoc, sizeof(tenTruoc), stdin);
    tenTruoc[strcspn(tenTruoc, "\n")] = 0;

    SinhVien svmoi;
    printf("Nhap thong tin sinh vien moi:\n");
    printf(" Ho ten: ");
    fgets(svmoi.ho_ten, sizeof(svmoi.ho_ten), stdin);
    svmoi.ho_ten[strcspn(svmoi.ho_ten, "\n")] = 0;
    printf(" Tuoi: ");
    scanf("%d", &svmoi.tuoi);
    printf(" Diem TB: ");
    scanf("%f", &svmoi.diemTB);
    getchar();

    insertBefore(&head, tenTruoc, svmoi);
    printList(head);

  
    char tenXoa[100];
    printf("\n\n--- XOA SINH VIEN ---\n");
    printf("Nhap ten sinh vien muon xoa: ");
    fgets(tenXoa, sizeof(tenXoa), stdin);
    tenXoa[strcspn(tenXoa, "\n")] = 0;

    deleteByName(&head, tenXoa);
    printList(head);

 
    while (head) {
        Node *tmp = head;
        head = head->next;
        free(tmp);
    }

    return 0;
}
