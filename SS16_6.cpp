#include <stdio.h>
int searchElement(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i; 
        }
    }
    return -1;  
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};  
    int size = sizeof(arr) / sizeof(arr[0]);  
    int valueToFind = 30; 
    int index = searchElement(arr, size, valueToFind);

    if (index != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri: %d\n", valueToFind, index);
    } else {
        printf("Phan tu %d khong duoc tim thay trong mang.\n", valueToFind);
    }

    return 0;
}

