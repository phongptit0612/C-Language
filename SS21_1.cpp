#include <stdio.h>
int main() {
    char str[100];  

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);  

    FILE *file = fopen("bt01.txt", "w");

    if (file == NULL) {
        printf("Loi khi mo file\n");
        return 1;  
    }

    fprintf(file, "%s", str);

    fclose(file);

    printf("Ghi chuoi thanh cong.\n");

    return 0;
}
