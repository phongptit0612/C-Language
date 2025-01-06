#include <stdio.h>
void swap (int *input1, int *input2) {
	int temp = *input1; 
	*input1 = *input2;
	*input2 = temp;
}
int main () {
	int input1 = 5;
	int input2 = 10;
	
	swap(&input1, &input2);
	
	printf("input 1 = %d\n", input1);
	printf("input 2 = %d\n", input2);
	
	return 0;
}
