#include <stdio.h>

int main() {
    int arr[100];
    int currentLength, position;

    printf("Nhap vao so luong phan tu ban dau (toi da 100): ");
    scanf("%d", &currentLength);

    if (currentLength < 1 || currentLength > 100) {
        printf("So luong phan tu khong hop le! Vui long nhap l?i.\n");
        return 1;
    }

    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Mang ban dau:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap vi tri can xoa (0 den %d): ", currentLength - 1);
    scanf("%d", &position);

    if (position < 0 || position >= currentLength) {
        printf("Vi tri khong hop le! Vui long nhap lai.\n");
        return 1;
    }

    for (int i = position; i < currentLength - 1; i++) {
        arr[i] = arr[i + 1];
    }

    currentLength--;

    printf("Mang sau khi xoa:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

