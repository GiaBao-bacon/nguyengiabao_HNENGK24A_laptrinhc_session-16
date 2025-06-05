#include <stdio.h>

void cap_nhat_mang(int *mang, int gia_tri_moi, int vi_tri, int kich_thuoc) {
    if (vi_tri >= 0 && vi_tri < kich_thuoc) {
        *(mang + vi_tri) = gia_tri_moi;
    } else {
        printf("Vi tri khong hop le\n");
    }
}

void in_mang(int *mang, int kich_thuoc) {
    printf("Cac phan tu trong mang:\n");
    int i; 
    for (i = 0; i < kich_thuoc; i++) {
        printf("%d ", *(mang + i));
    }
    printf("\n");
}

int main() {
    int mang[5] = {1, 3, 5, 7, 9};
    int kich_thuoc = 5;

    printf("Mang truoc khi cap nhat:\n");
    in_mang(mang, kich_thuoc);

    cap_nhat_mang(mang, 10, 2, kich_thuoc);

    printf("Mang sau khi cap nhat:\n");
    in_mang(mang, kich_thuoc);

    return 0;
}
