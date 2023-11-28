#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int hitung(int nilai1, int nilai2) {
    return abs(nilai1 - nilai2);
}

int mutlak(int angka) {
    return abs(angka);
}

int main() {
    int a, b, c, d, Hasil;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    Hasil = hitung(a, c) + hitung(b, d);
    
    printf("%d", Hasil);

    return 0;
}
