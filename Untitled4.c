#include <stdio.h>

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

    in_mang(mang, kich_thuoc);

    return 0;
}
