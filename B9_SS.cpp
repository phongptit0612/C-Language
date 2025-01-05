,#include <stdio.h>
int main() {
    char str[100], remove;
    int i, j = 0;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    printf("Nhap ki tu can xoa: ");
    scanf("%c", &remove);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != remove) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    printf("Chuoi sau ki da xoa ki tu '%c': %s\n", remove, str);

    return 0;
}

