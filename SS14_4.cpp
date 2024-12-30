#include <stdio.h>
#include <string.h>
int main() {
	char kitu;
	int count = 0;
	char arr[100];
	printf("Nhap chuoi: ");
	fgets (arr, 100, stdin);
	printf("Nhap ki tu: ");
	scanf("%c", &kitu);
	int length = strlen(arr);
	for (int i = 0; i < length; i++) {
		if (arr[i] == kitu){
			count++;
		}
	}
	printf("Ki tu '%c' xuat hien %d lan.\n", kitu, count);
	return 0;
}  
