#include <stdio.h>

int main() {
    int baris, kolom;

    printf("Jumlah baris dan kolom matriks: ");
    scanf("%d %d", &baris, &kolom);

    int matriks[baris][kolom];

    printf("Elemen matriks:\n");
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            scanf("%d", &matriks[i][j]);
        }
    }

    printf("Hasil Matriks:\n");
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
