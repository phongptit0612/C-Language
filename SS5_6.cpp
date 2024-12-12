#include <stdio.h>

int main() {
    int a, b, choice;
    printf("CALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so?\n");
        printf("5. Thoat\n");
        printf("Lua chon: ");
        scanf("%d", &choice);


    do {    
    printf("Nhap vao so a: ");
    scanf("%d", &a);
    printf("Nhap vào so b: ");
    scanf("%d", &b);

        switch(choice) {
            case 1:
                printf("Tong cua %d va %d la: %d\n", a, b, a + b);
                break;
            case 2:
                printf("Hieu cua %d va %d la: %d\n", a, b, a - b);
                break;
            case 3:
                printf("Tích cua %d và %d là: %d\n", a, b, a * b);
                break;
            case 4:
                if (b != 0) {
                    printf("Thuong cua %d và %d là: %.2f\n", a, b, (float)a / b);
                } else {
                    printf("Loi! Không the chia cho 0.\n");
                }
                break;
            case 5:
                printf("Thoát chuong trình.\n");
                break;
            default:
                printf("Lua chon khong hop li, chon lai.\n");
        }
    } while (choice != 5);

    return 0;
}

