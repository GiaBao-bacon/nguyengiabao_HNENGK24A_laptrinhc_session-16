#include <stdio.h>

void hoan_doi(int *a, int *b) {
    int tam = *a;
    *a = *b;
    *b = tam;
    printf("Trong ham hoan_doi:\n");
    printf("Gia tri bien 1: %d\n", *a);
    printf("Gia tri bien 2: %d\n", *b);
}

int main() {
    int bien1 = 5;
    int bien2 = 10;

    printf("Truoc khi hoan doi:\n");
    printf("Gia tri bien1: %d\n", bien1);
    printf("Gia tri bien2: %d\n", bien2);

    hoan_doi(&bien1, &bien2);

    printf("\nSau khi hoan doi:\n");
    printf("Gia tri bien1: %d\n", bien1);
    printf("Gia tri bien2: %d\n", bien2);

    return 0;
}
