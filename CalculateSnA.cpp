#include <stdio.h>
int main() {
	float T, V, A;
	float Tong, Tbinh;
 
	printf("Nhap diem Toan: ");
	scanf("%f", &T); 
	printf("Nhap diem Van: ");
	scanf("%f", &V); 
	printf("Nhap diem Anh: ");
	scanf("%f", &A); 
	
	Tong = T + V + A;
	Tbinh = Tong / 3;
	 
	printf("Tong diem la: %.2f\n", Tong);
	printf("Diem trung binh la: %.2f\n", Tbinh);
	 
	return 0; 
} 
