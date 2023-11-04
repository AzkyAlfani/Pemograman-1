#include <stdio.h>

int main() {
    int nilai;
    char nilai_huruf;

    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    if (nilai >= 90) {
        nilai_huruf = 'A';
    } else if (nilai >= 70) {
        nilai_huruf = 'B';
    } else if (nilai >= 60) {
        nilai_huruf = 'C';
    } else if (nilai >= 50) {
        nilai_huruf = 'D';
    } else {
        nilai_huruf = 'E';
    }

   
    printf("Nilai huruf: %c\n", nilai_huruf);

    return 0;
}
