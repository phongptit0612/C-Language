#include <stdio.h>

int main() {
    int arr[100];  
    int n;  
    int position, value;  

    printf("Nhap so phan tu muon nhap vao mang (toi da 100): ");
    scanf("%d", &n);
    
    if (n > 100) {
        printf("So phan tu khong duoc vuot qua 100.\n");
        return 1;  
    }

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri can them: ");
    scanf("%d", &value);
    printf("Nhap vi tri muon them (u 0 den %d): ", n);
    scanf("%d", &position);

    if (position < 0 || position > n) {
        printf("Vi tri khong hop le.\n");
        return 1;
    }

    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];  
    }
    arr[position] = value;  

    n++;

    printf("Mang sau khi them phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

