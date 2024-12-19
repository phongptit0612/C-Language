#include <stdio.h>

int main() {
    char password[] = "phongdu"; 
    char input[100];  
    int i = 0;

    do {
        printf("Nhap mat khau: ");
        scanf("%s", input); 

        while (password[i] != '\0' && input[i] != '\0') {
            if (password[i] != input[i]) {
                printf("Mat khau sai!.\n");
                break;  
            }
            i++;
        }

        if (password[i] == '\0' && input[i] == '\0') {
            printf("Mat khau dung!\n");
            break; 
        }
        i = 0;  

    } while (1); 

    return 0;
}
