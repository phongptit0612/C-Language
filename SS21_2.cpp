#include <stdio.h>

int main() {
    FILE *file = fopen("bt01.txt", "r");  

    if (file == NULL) {
        printf("Khong mo dc file bt01.txt\n");
        return 1;
    }
    char ch = fgetc(file);
    if (ch == EOF) {
        printf("File bt01.txt rong\n");
    } else {
        printf("Ki tu dau tien trong file la: %c\n", ch);
    }
    fclose(file);

    return 0;
}

