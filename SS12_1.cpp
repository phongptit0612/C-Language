#include <stdio.h>

int tinh_tong(int a, int b) {
    return a + b;
}

int main() {
    int a, b, kq;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    kq = tinh_tong(a, b);

    printf("Tong cua %d va %d la: %d\n", a, b, kq);

    return 0;
}

