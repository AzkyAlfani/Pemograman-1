#include <stdio.h>

int main() {
    int batas_maksimal;

    printf("Masukkan batas maksimal: ");
    scanf("%d", &batas_maksimal);


    for (int i = 1; i <= batas_maksimal; i += 2) {
        printf("%d ", i);
    }

    printf("\n");

    for (int i = batas_maksimal; i >= 2; i -= 2) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
