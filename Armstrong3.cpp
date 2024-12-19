#include <stdio.h>

int main() {
    int num, sum, n1, n2, n3;

    printf("Cac so armstrong co ba chu so la:\n");
    
    for (num = 100; num <= 999; num++) {
        n1 = num / 100;           
        n2 = (num / 10) % 10;     
        n3 = num % 10;         

        sum = (n1 * n1 * n1) + (n2 * n2 * n2) + (n3 * n3 * n3);

        if (sum == num) {
            printf("%d ", num);
        }
    }

    return 0;
}

