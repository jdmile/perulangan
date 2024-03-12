#include <stdio.h>

int main() {
    int N;
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    printf("Bilangan Sempurna hingga %d adalah: ", N);

    for (int i = 2; i <= N; i++) {
        int sum = 1; 
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }

        if (sum == i) {
            printf("%d", i);

            if (i < N) {
                printf(", ");
            }
        }
    }

    printf("\n");

    return 0;
}
