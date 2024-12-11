#include <stdio.h>
int main() {
	float KW, Cash;
	
	printf("Nhap so kWh: ");
	scanf("%f", &KW);
		
	if ((KW >= 0 && KW < 50)) {
    printf("Tien dien la %.2f\n", Cash = KW * 10000);
} else if ((KW >= 50 && KW < 100)) {
	printf("Tien dien la %.2f\n", Cash = KW * 15000);
} else if ((KW >= 100 && KW < 150)) {
	printf("Tien dien la %.2f\n", Cash = KW * 20000);
} else if ((KW >= 150 && KW < 200)) {
	printf("Tien dien la %.2f\n", Cash = KW * 25000);
} else if (KW >= 200) {
	printf("Tien dien la %.2f\n", Cash = KW * 30000);
} else {
	printf("So Kwh khong hop le.\n");
}
	return 0;
}
