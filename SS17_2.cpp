#include <stdio.h>
int main() {
	struct information {
		char name[50];
		int age;
		char phoneNumber[15];
	};
	//Nhap thong tin
	struct information info;
	printf("Nhap ten sinh vien: \n");
	fgets(info.name, sizeof(info.name), stdin);
	printf("Nhap tuoi sinh vien: \n");
	scanf("%d", &info.age);
	getchar();
	printf("Nhap so dien thoai sinh vien: \n");
	fgets(info.phoneNumber, sizeof(info.phoneNumber), stdin);
	printf("\n");
	//In thong tin da nhap
	printf("Ten sinh vien: %s", info.name);
	printf("Tuoi: %d\n", info.age);
	printf("So dien thoai: %d\n", info.phoneNumber);
	return 0;
}
