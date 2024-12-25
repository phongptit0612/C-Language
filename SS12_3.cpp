#include <stdio.h>

int giai_thua(int n) {
    int ket_qua = 1;
    
    if (n < 0) {
        return -1;
    }

    for (int i = 1; i <= n; i++) {
        ket_qua *= i;
    }

    return ket_qua;
}

int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    int ket_qua = giai_thua(n);

    if (ket_qua != -1) {
        printf("Giai thua cua %d la: %d\n", n, ket_qua);
    }

    return 0;
}
