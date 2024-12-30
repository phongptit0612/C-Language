#include <stdio.h>
#include <string.h>
int main() {
	char chuoi[100];
	printf("Nhap chuoi: ");
    fgets(chuoi, 100, stdin);
    
    chuoi[strcspn(chuoi, "\n")] = '\0';
    
    printf("Chuoi la: %s\n", chuoi);
    printf("Do dai chuoi: %d\n", (int)strlen(chuoi));
    
	return 0; 
} 
