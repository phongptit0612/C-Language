#include <stdio.h>
int main() {
	 float C, F;
	 printf("Nhap do C:");
	 scanf("%f", &C);
	 
	 F = (C * 9 / 5) + 32;
	 printf("Do F la: %.2f\n", F);
	return 0;
}
