#include <stdio.h>

int main() {
    int jumlahRuangan;
    printf("jumlah ruangan: ");
    scanf("%d", &jumlahRuangan);

    int zetsuPutih[jumlahRuangan];

    printf("Masukkan jumlah zetsu putih untuk setiap ruangan: ");
    for (int i = 0; i < jumlahRuangan; i++) {
        scanf("%d", &zetsuPutih[i]);
    }

    for (int i = 0; i < jumlahRuangan; i++) {
        zetsuPutih[i] *= (i + 1);
    }

    printf("Jumlah zetsu putih setelah membelah diri pada setiap ruangan:\n");
    for (int i = 0; i < jumlahRuangan; i++) {
        printf("%d ", zetsuPutih[i]);
    }

    return 0;
}
