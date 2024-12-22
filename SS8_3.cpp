#include <stdio.h>
int main() {
	int n;
	printf("Nhap vao mot so nguyen: ");
	scanf("%d", &n);
	int arrInt[n][n];
	
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			printf("Nhap phan tu thu %d cua hang %d: ", j+1, i+1);
			scanf ("%d", &arrInt[i][j]);
		}
	}
		
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			printf("%d ", arrInt[i][j]);
		}
		printf("\n");
	}
	return 0;
}
