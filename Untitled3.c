#include <stdio.h>

void tinh_tong(int *a, int *b, int *ket_qua) {
    *ket_qua = *a + *b;
    printf("Trong ham tinh_tong:\n");
    printf("Tong hai so: %d\n", *ket_qua);
}

int main() {
    int so1 = 7;
    int so2 = 3;
    int ket_qua = 0;

    printf("Truoc khi tinh tong:\n");
    printf("So1: %d\n", so1);
    printf("So2: %d\n", so2);
    printf("Ket qua: %d\n", ket_qua);

    tinh_tong(&so1, &so2, &ket_qua);

    printf("\nSau khi tinh tong:\n");
    printf("Ket qua: %d\n", ket_qua);

    return 0;
}
