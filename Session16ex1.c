#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    // Cách 1: Dùng bi?n tr?c ti?p
    printf("Cach 1: Dung bien truc tiep\n");
    printf("Gia tri cua a: %d\n", a);
    printf("Dia chi cua a: %p\n", (void *)&a);

    // Cách 2: Dùng con tr?
    printf("\nCach 2: Dung con tro\n");
    printf("Gia tri cua a thong qua con tro: %d\n", *p);
    printf("Dia chi cua a thong qua con tro: %p\n", (void *)p);

    return 0;
}

