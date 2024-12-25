#include <stdio.h>

int maxfind(int arr[], int n) {
    int max = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int arr[] = {1, 3, 7, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = maxfind(arr, n);

    printf("So lon nhat trong mang la: %d\n", max);

    return 0;
}

