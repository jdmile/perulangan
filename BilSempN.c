#include <stdio.h>

int main() {
    int N, i, j, sum;

    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    printf("Bilangan Sempurna hingga %d:\n", N);

    for (i = 1; i <= N; i++) {
        sum = 0;

        for (j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}
