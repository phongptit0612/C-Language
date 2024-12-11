#include <stdio.h>
int main() {
	int A, B, C;
	printf("Nhap A: ");
	scanf("%d", &A);
	printf("Nhap B: ");
	scanf("%d", &B);
	printf("Nhap C: ");
	scanf("%d", &C);
	
	if ((C > B && C < A) || (C < B && C > A)) {
		printf("So thu 3 nam trong khoang so thu 1 va 2.\n");
	}else {
		printf("So thu 3 khong nam trong khoang so thu 1 va 2.\n");
	}
	return 0;
}
