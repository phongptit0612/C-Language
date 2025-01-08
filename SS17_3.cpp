#include <stdio.h>
#include <string.h> 
int main() {
    struct list {
        char name[50];          
        int age;                
        char phonenumber[15];   
    };

    struct list sinhvien[5];  

    for (int i = 0; i < 5; i++) {
        printf("Nhap ten sinh vien thu %d: \n", i + 1);
        fgets(sinhvien[i].name, sizeof(sinhvien[i].name), stdin); 
        sinhvien[i].name[strcspn(sinhvien[i].name, "\n")] = '\0';  // Xoa ki tu newline

        printf("Nhap tuoi sinh vien thu %d: \n", i + 1);
        scanf("%d", &sinhvien[i].age);
        getchar();

        printf("Nhap so dien thoai sinh vien thu %d: \n", i + 1);
        fgets(sinhvien[i].phonenumber, sizeof(sinhvien[i].phonenumber), stdin);  
        sinhvien[i].phonenumber[strcspn(sinhvien[i].phonenumber, "\n")] = '\0'; //Xoa ki tu  newline.
    }
    printf("Thong tin cac sinh vien: \n");
    for (int i = 0; i < 5; i++) {
        printf("Info sinh vien thu %d: \n", i + 1);
        printf("Ten sinh vien: %s\n", sinhvien[i].name);  
        printf("Tuoi sinh vien: %d\n", sinhvien[i].age);  
        printf("So dien thoai sinh vien: %s\n", sinhvien[i].phonenumber);  
        printf("\n");
    }

    return 0;
}

