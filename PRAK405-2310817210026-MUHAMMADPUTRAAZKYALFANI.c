#include <stdio.h>

int main() {
    int n, k;
    for(int i = 0; i < 3; i++){
    scanf("%d %d", &n, &k);

    int sumAll = 0;

        for (int i = 1; i <= n; i++) {
            int sumLine = 0;
            for (int j = i; j >= 1; j--) {
                int h = j * k;
                sumLine += h;
                printf("(%d * %d)", j, k, h);
                if (j > 1) {
                    printf(" + ");
                }
            }
            sumAll += sumLine;
            printf(" = %d\n", sumLine);
        }

        printf("%d\n", sumAll);
        }
        return 0;
    }