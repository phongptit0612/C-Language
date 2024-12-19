#include <stdio.h>

int main() {
    int num, sum, chan=0, le=0;

    for (int i = 0; i < 5; i++) {
        printf("Nhap so nguyen thu %d: ", i + 1);
        scanf("%d", &num);
        
        if(num % 2 != 0) {
        	le++;
		} else {
			chan++;
	}				
} 
      printf("So luong so le la: %d\n", le);
    printf("So luong so chan la: %d\n", chan);
 return 0;
}
 
		

		
