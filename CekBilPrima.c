#include <stdio.h>

int main() {

    int N;
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    int count = 0;

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            count ++;
            
        }
    } 

    if (count == 2) {
        printf("Bilangan Prima."); 
    } else {
        printf("Bukan Bilangan Prima.");
    }

    return 0;

}