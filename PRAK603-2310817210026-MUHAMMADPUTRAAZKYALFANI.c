#include <stdio.h>

void ngitung(int n1, int n2, int kali[n1], int kali1[n2]) { 
    for (int i = 0; i < n1; i++) {
        printf("%d ", kali[i] * kali1[i]);
    }
    printf("\n");
}

int main() {
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("\nJumlah tidak sama \n");
        return 0;
    }

    int kali[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &kali[i]);
    }

    int kali1[n2];
    for (int j = 0; j < n2; j++) {
        scanf("%d", &kali1[j]);
    }

    printf("\n");
    ngitung(n1, n2, kali, kali1);

    return 0;
}
