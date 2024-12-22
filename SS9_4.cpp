#include <stdio.h>

int main() {
    int arr[100], currentLength = 0, choice, position, newValue, i;

    while (1) {
        printf("MENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap vao so luong phan tu ban dau (toi da 100): ");
                scanf("%d", &currentLength);
                if (currentLength < 1 || currentLength > 100) {
                    printf("So luong phan tu khong hop le!\n");
                } else {
                    printf("Nhap cac phan tu:\n");
                    for (i = 0; i < currentLength; i++) {
                        printf("Nhap phan tu thu %d: ", i + 1);
                        scanf("%d", &arr[i]);
                    }
                }
                break;

            case 2:
                if (currentLength == 0) {
                    printf("Mang rong!\n");
                } else {
                    printf("Mang hien tai: ");
                    for (i = 0; i < currentLength; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                if (currentLength == 100) {
                    printf("Mang da day!\n");
                } else {
                    printf("Nhap gia tri phan tu muon them: ");
                    scanf("%d", &newValue);
                    arr[currentLength] = newValue;
                    currentLength++;
                    printf("Mang sau khi them: ");
                    for (i = 0; i < currentLength; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                printf("Nhap vi tri can sua (0 den %d): ", currentLength - 1);
                scanf("%d", &position);
                if (position < 0 || position >= currentLength) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    printf("Nhap gia tri moi: ");
                    scanf("%d", &newValue);
                    arr[position] = newValue;
                    printf("Mang sau khi sua: ");
                    for (i = 0; i < currentLength; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 5:
                printf("Nhap vi tri can xoa (0 den %d): ", currentLength - 1);
                scanf("%d", &position);
                if (position < 0 || position >= currentLength) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    for (i = position; i < currentLength - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    currentLength--;
                    printf("Mang sau khi xoa: ");
                    for (i = 0; i < currentLength; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 6:
                printf("Thoat chuong trinh!\n");
                return 0;

            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    }

    return 0;
}

