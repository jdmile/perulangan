#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    printf("Bilangan Prima hingga %d adalah: ", N);

    if (N >= 2) {
        printf("2");
    }

    for (int i = 3; i <= N; i++) {
        bool isPrima = true;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrima = false;
                break;
            }
        }

        if (isPrima) {
            printf(", %d", i);
        }
    }

    printf("\n");

    return 0;
}
