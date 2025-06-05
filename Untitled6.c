#include <stdio.h>

int tim_kiem(int *mang, int kich_thuoc, int gia_tri) {
	int i; 
    for (i = 0; i < kich_thuoc; i++) {
        if (*(mang + i) == gia_tri) {
            return i;
        }
    }
    return -1;
}

int main() {
    int mang[5] = {1, 2, 4, 6, 7};
    int kich_thuoc = 5;
    int gia_tri_tim;

    printf("Mang ban dau:\n");
    int i; 
    for (i = 0; i < kich_thuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    printf("Nhap gia tri can tim: ");
    scanf("%d", &gia_tri_tim);

    int vi_tri = tim_kiem(mang, kich_thuoc, gia_tri_tim);

    if (vi_tri != -1) {
        printf("Gia tri %d nam o vi tri: %d\n", gia_tri_tim, vi_tri);
    } else {
        printf("Khong tim thay gia tri %d trong mang\n", gia_tri_tim);
    }

    return 0;
}
