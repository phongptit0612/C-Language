#include <stdio.h>
void cal (int *a, int *b, int *sum) {
	*sum = *a + *b;
}
int main () {
	int a = 5;
	int b = 10;
	int sum;
	
	cal(&a, &b, &sum);
	printf("Ket qua la: %d", sum);
	
	return 0;
}
