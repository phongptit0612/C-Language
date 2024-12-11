#include <stdio.h>
int main() {
	int N;
	printf("Nhap so N: ");
	scanf("%d", &N);
	
	if (N % 2 == 0) {
		printf("So vua nhap la so chan.\n");
	} else {
		printf("So vua nhap la so le.\n");
	}
	return 0;
} 
