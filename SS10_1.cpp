#include <stdio.h>

int main() {
    int n, x, i;
    printf("Nhap n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap phan tu:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri can tim kiem: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++) {
        if(arr[i] == x) {
            printf("Phan tu %d o %d\n", x, i);
            return 0;
        }
    }

    printf("Khong tim thay phan tu\n");
    return 0;
}
 
