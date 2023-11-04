#include <stdio.h>

int main() {
    int N;

    printf(" bilangan : ");
    scanf("%d", &N);


    if (N > 0) {
        printf("Positif\n");
    } else if (N < 0) {
        printf("Negatif\n");
    } else {
        printf("Nol\n");
    }

    return 0;
}
