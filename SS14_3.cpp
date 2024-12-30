#include <stdio.h>
#include <string.h>
int main() {
	char arr[100];
	printf("Nhap mang: ");
	fgets(arr, 100, stdin);
	
	int length = strlen(arr);
	for (int i = length - 1; i>=0; i--) {
			printf("%c", arr[i]);
	}
     printf("\n");
	return 0;
}
