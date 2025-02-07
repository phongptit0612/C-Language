#include <stdio.h>

int main() {
    char str[100];

    printf("Nhap chuoi vao file: ");
    fgets(str, sizeof(str), stdin);  

    FILE *file = fopen("bt01.txt", "a");

    if (file == NULL) {
        printf("Loi mo file\n");
        return 1; 
    }
    fprintf(file, "%s", str);
    fclose(file);
    printf("Da them chuoi thanh cong.\n");

    return 0;
}
