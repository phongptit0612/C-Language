#include <stdio.h>

int main() {
    int number = 126;  
    int input;

    do {
        printf("Nhap mot so bat ki: ", number);
        scanf("%d", &input);
    } while (input != number);  

    printf("Correct %d.\n", number);

    return 0;
}

