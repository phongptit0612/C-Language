#include <stdio.h>
int main() {
	int N;
	printf("Nhap so N: ");
	scanf("%d", &N);
	if (N>0) {
		printf("So nhap la so duong.\n");
	} else if (N<0) {
		printf("So nhap la so am");
	}
	return 0 ;
}

