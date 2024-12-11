#include <stdio.h>

int main() {
    float a, b, c;

    printf("Nhap do dai canh a: ");
    scanf("%f", &a);
    printf("Nhap do dai canh b: ");
    scanf("%f", &b);
    printf("Nhap do dai canh c: ");
    scanf("%f", &c);
//Tong cua hai canh tam giac bat ki phai lon hon canh con lai
    if (a + b > c && a + c > b && b + c > a) {
        printf("Là 3 canh tam giac.\n");
    } else {
        printf("Không phai la 3 canh tam giac.\n");
    }

    return 0;
}

