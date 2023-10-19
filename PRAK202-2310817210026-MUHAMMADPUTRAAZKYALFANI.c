#include <stdio.h>

int main() {
    double nilai_pertama, nilai_kedua, hasil;

    printf("Masukkan Nilai Pertama : ");
    scanf("%lf", &nilai_pertama);
    printf("Masukkan Nilai Kedua : ");
    scanf("%lf", &nilai_kedua);

    hasil = nilai_pertama + nilai_kedua;

    printf("Hasil dari penjumlahan nilai pertama \"%0.2lf\" dan nilai kedua \"%0.2lf\" adalah \"%0.2lf\"\n", nilai_pertama, nilai_kedua, hasil);

    return 0;
}
