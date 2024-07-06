#include <stdio.h>

void staircase(int n) {
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            printf("#");
        }
        printf("\n");
    }
}

int main() {
    int n = 6; // You can change this value to test with different sizes
    staircase(n);
    return 0;
}
