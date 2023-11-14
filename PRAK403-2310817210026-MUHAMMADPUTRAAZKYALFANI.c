#include <stdio.h>

int main() {
    int angka1, angka2;

    printf("Input Angka: ");
    scanf("%d %d", &angka1, &angka2);

    int start, end, step;

    if (angka1 < angka2) {
        start = angka1;
        end = angka2;
        step = 1;
    } else {
        start = angka1;
        end = angka2;
        step = -1;
    }

    for (int i = start; i != end + step; i += step) {
        printf("%d %d - ", i, angka1 + angka2 - i);
    }

    return 0;
}
