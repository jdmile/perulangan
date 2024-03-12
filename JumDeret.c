#include <stdio.h>

int main() {
    int N;
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N harus lebih dari 0.");
    }

    int jumlah = 0;

    for (int i = 1; i <= N; i++) {
        jumlah = jumlah + i;
        printf("Jumlah total deret adalah: %.d\n", jumlah);

    }

    return 0;
    
}