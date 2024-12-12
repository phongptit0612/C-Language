#include <stdio.h>

int main() {
    int n;
    printf("Nhap vao so tu 1 den 10: ");
    scanf("%d", &n);
    if (n >= 1 && n <= 10) {
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", n, i, n * i);
        }
    } else {
        printf("So khong hop le!\n");
    }

    return 0;
}

