#include <stdio.h>
int main() {
	
	int n, sum = 0;
	printf("Nhap so N: ");
	scanf("%d", &n);
	
	if (n<0) {
		printf("Nhap so nguyen duong!");
	} else {
		for (int i= 1; i<=n; i++) {
			sum+=i;
		}
		
		printf("Ket qua tong la: %d.\n", sum);
		
	}
	
	return 0;
}
