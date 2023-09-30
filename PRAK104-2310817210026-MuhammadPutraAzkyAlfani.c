#include <stdio.h>

int main(){

    int hargaA = 400000;
    int hargaB = 350000;

    float diskonA = 0.13;
    int hargasetelahdiskonA = hargaA - (hargaA * diskonA);

    float diskonB = 0.21;
    int hargasetelahdiskonB = hargaB - (hargaB * diskonB);

    printf("harga sepatu A adalah %d\n", hargaA);
    printf("harga sepatu B adalah %d\n", hargaB);
    printf("sepatu A mendapatkan diskon 13%% sehingga harganya %d\n", hargasetelahdiskonA);
    printf("sepatu B mendapatkan diskon 21%% sehingga harganya %d\n", hargasetelahdiskonB);

    return 0;
}