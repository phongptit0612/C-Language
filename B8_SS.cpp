#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i = 0;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++) {
        if ((i == 0 || str[i - 1] == ' ') && str[i] >= 97 && str[i] <= 122) {
            str[i] -= 32; 
        }
        i++;
    }
    printf("Chuoi sau khi in hoa: %s\n", str);
    return 0;
}

