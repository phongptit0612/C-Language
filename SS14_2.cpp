#include <stdio.h>
int main() {
	char str[100];
	printf("Nhap chuoi: ");
	fgets(str, 100, stdin);
	
	for (int i=0; str[i]!= '\0'; i++) {
		printf("%c ", str[i]);
	}
	return 0;
}
