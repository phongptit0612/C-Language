#include <stdio.h>
#include <string.h> 

struct Student {
    int id;               
    char name[50];        
    int age;               
    char phoneNumber[15]; 
};

int main() {
    struct Student students[50];
    int numberOfStudents = 5;  

    for (int i = 0; i < numberOfStudents; i++) {
        students[i].id = i + 1;

        printf("Nhap ten sinh vien thu %d: \n", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Nhap tuoi sinh vien thu %d: \n", i + 1);
        scanf("%d", &students[i].age);
        getchar(); 

        printf("Nhap so dien thoai sinh vien thu %d: \n", i + 1);
        fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin);
        students[i].phoneNumber[strcspn(students[i].phoneNumber, "\n")] = '\0';
    }

    printf("\nThong tin cac sinh vien: \n");
    for (int i = 0; i < numberOfStudents; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n\n", students[i].phoneNumber);
    }

    return 0;
}

