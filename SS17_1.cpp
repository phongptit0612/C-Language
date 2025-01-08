#include <stdio.h>
int main() {
	struct information {
		char name[50];
		int age;
		char phoneNumber[15];
	};
	struct information info = {"Tran Huu Trung Phong", 18, "0938773607"};
	printf("Ten sinh vien: %s\n", info.name);
	printf("Tuoi: %d\n", info.age);
	printf("So dien thoai: %d\n", info.phoneNumber);
	return 0;
}
