#include <stdio.h>

int main() {
    int x = 10;        
    int *ptr = &x;     
    
    // C�ch 1
    printf("Cach 1:\n");
    printf("Gia tri cua x: %d\n", x);                
    printf("Dia chi cua x: %p\n", &x);               

    // C�ch 2
    printf("\nCach 2:\n");
    printf("Gia tri cua x qua ptr: %d\n", *ptr);  
    printf("Dia chi cua x qua ptr: %p\n", ptr);   
    return 0;
}

