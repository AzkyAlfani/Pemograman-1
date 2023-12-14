baris, kolom = map(int, input("jumlah baris dan kolom matriks: ").split())


matriks = []

print("Masukkan elemen matriks:")
elemen_input = list(map(int, input().split()))

for i in range(0, len(elemen_input), kolom):
    matriks.append(elemen_input[i:i + kolom])

print("Hasil Matriks:")
for i in range(baris):
    for j in range(kolom):
        print(matriks[i][j], end=" ")
    print()
