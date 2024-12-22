#include <stdio.h>
int main() {
    int arrInt[3][3] = {
        {5, 12, 7},
        {14, 2, 10},
        {9, 8, 16}
    };
    
    int max = arrInt[0][0];
    for (int i=0; i<3; i++) {
    	for (int j=0; j<3; j++) {
    		if (arrInt[i][j] > max) {
    			max = arrInt[i][j];
			}
		}
	}
	printf("%d", max);
	return 0;
}
