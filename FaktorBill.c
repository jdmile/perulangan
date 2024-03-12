#include <stdio.h>

int main() {
    int N;
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    int faktor = 0;

    printf("Faktor bilangannya adalah: ");
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            faktor += i;
            printf("%d", i);
        
            if (i != N) {
                printf(", ");
            }       
        } 
        
    }

    return 0;
}
