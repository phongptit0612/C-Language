#include <stdio.h>
	int mang (int arr[], int n) {
		for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
}
    return 0;
	}
    int main() {
    	int arr[]={1, 2, 3, 4, 5};
    	int n=sizeof(arr)/sizeof(arr[0]);
    	
    	mang(arr, n);
    	
    	return 0;
	}
