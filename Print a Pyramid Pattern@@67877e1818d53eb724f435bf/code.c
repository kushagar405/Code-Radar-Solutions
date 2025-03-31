#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) { // Loop for rows
        for (int j = 1; j <= N - i; j++) { // Loop for spaces
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) { // Loop for stars
            printf("*");
        }
        printf("\n"); // New line after each row
    }
    
    return 0;
}

