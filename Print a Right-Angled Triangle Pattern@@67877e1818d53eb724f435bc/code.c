#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) { // Loop for rows
        for (int j = 0; j < i; j++) { // Loop for columns
            printf( "*" );
        }
        printf("\n"); // New line after each row
    }
    
    return 0;
}
