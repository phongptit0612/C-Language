#include <stdio.h>
int main() {
	float r, cv, dt;
	
	printf("Nhap ban kinh r: ");
	scanf("%f", &r);
	
	cv = r * 2 * 3,14;
	dt = r * r * 3,14;
	
	printf("Chu vi la: %.2f\n", cv);
	printf("Dien tich la: %.2f\n", dt); 
	
	return 0;
}
