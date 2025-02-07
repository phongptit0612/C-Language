#include <stdio.h>

int main() {
    char str[100]; 
    FILE *file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Loi mo file\n");
        return 1;  
    }
    if (fgets(str, sizeof(str), file) != NULL) {
        printf("Dong dau tien trong file la: %s", str);
    } else {
        printf("File rong hoac loi.\n");
    }
    fclose(file);
    return 0;
}
