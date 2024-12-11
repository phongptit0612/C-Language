#include <stdio.h>
int main() {
	int N;
	printf("Nhap so N: ");
	scanf("%d", &N);
	
	if (N % 3 == 0 && N % 5 == 0) {
		printf("So vua nhap chia het cho ca 3 va 5.\n");
	} else if (N % 3 == 0) {
		printf ("So vua nhap chia het cho 3.\n");
	} else if (N % 5 == 0) {
		printf ("So vua nhap chia het cho 5.\n");
	}
return 0;
}
	
