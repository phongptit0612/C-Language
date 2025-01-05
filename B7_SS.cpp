#include <stdio.h>

int main() {
    char str[100];  
    int letterCount = 0, digitCount = 0, specialCount = 0;
    
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) {
            letterCount++;
        }
        else if (str[i] >= 48 && str[i] <= 57) {
            digitCount++;
        }
        else {
            specialCount++;
        }
    }
    
    printf("So luong chu cai: %d\n", letterCount);
    printf("So luong chu so: %d\n", digitCount);
    printf("So luong ktdb: %d\n", specialCount);

    return 0;
}

