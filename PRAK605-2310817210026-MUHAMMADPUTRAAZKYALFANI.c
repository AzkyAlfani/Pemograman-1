#include <stdio.h>

void multiply_matrices(int n, int matrix_a[n][n], int matrix_b[n][n], int result[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }
}

void input_matrix(int n, int matrix[n][n], char label[]) {
    printf("Masukkan matriks %s:\n", label);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void print_matrix(int n, int matrix[n][n], char label[]) {
    printf("Matriks %s\n", label);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Masukkan ordo matriks n x n:\n");
    scanf("%d", &n);

    int matrix_a[n][n];
    int matrix_b[n][n];
    int result[n][n];

    input_matrix(n, matrix_a, "A");
    input_matrix(n, matrix_b, "B");

    if (n <= 0) {
        printf("\nOrdo matriks tidak sesuai untuk perkalian.\n");
    } else {
        multiply_matrices(n, matrix_a, matrix_b, result);

        printf("\nMatriks AxB:\n");
        print_matrix(n, result, "AXB");
    }

    return 0;
}
