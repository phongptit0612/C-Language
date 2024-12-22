#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5, position, replace;

    printf("Mang ban dau:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap vi tri can sua doi (0 den %d): ", n - 1);
    scanf("%d", &position); 
    if (position < 0 || position >= n) {
        printf("Vi tri khong hop le!\n");
        return 1;  
    }

    printf("Nhap gia tri can thay doi: ");
    scanf("%d", &replace);  

    arr[position] = replace;  

    printf("Mang sau khi sua la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

