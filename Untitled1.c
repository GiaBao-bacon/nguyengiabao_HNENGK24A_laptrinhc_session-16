#include <stdio.h>

int main() {
    int bien = 10;
    int *contro = &bien;

    printf("Cach 1:\n");
    printf("Gia tri cua bien: %d\n", bien);
    printf("Dia chi cua bien: %p\n", &bien);
    printf("Gia tri qua con tro: %d\n", *contro);
    printf("Dia chi qua con tro: %p\n", contro);

    int giatri = *contro;
    void *diachi = contro;
    printf("\nCach 2:\n");
    printf("Gia tri cua bien: %d\n", giatri);
    printf("Dia chi cua bien: %p\n", diachi);

    return 0;
}
