def multiply_matrices(matrix_a, matrix_b):
    result_matrix = []
    for i in range(len(matrix_a)):
        row = []
        for j in range(len(matrix_b[0])):
            element = sum(matrix_a[i][k] * matrix_b[k][j] for k in range(len(matrix_b)))
            row.append(element)
        result_matrix.append(row)
    return result_matrix

def input_matrix(n, label):
    print("Masukkan matriks", label)
    matrix = []
    for _ in range(n):
        row = list(map(int, input().split()))
        matrix.append(row)
    return matrix

def print_matrix(matrix, label):
    print("Matriks", label)
    for row in matrix:
        print(" ".join(map(str, row)))

if __name__ == "__main__":
    print("Masukkan ordo matriks n x n:")
    n = int(input())

    matrix_a = input_matrix(n, "A")
    matrix_b = input_matrix(n, "B")

    if len(matrix_a) != len(matrix_b[0]):
        print("\nOrdo matriks tidak sesuai untuk perkalian.")
    else:
        result = multiply_matrices(matrix_a, matrix_b)
        print("\nMatriks AxB:")
        print_matrix(result, "AXB")
