jumlah_ruangan = int(input("Masukkan jumlah ruangan: "))
zetsu_putih = list(map(int, input(f"Masukkan jumlah zetsu putih untuk setiap ruangan: ").split()))

for i in range(jumlah_ruangan):
    zetsu_putih[i] *= (i + 1)

print("Jumlah zetsu putih setelah membelah diri pada setiap ruangan:")
print(" ".join(map(str, zetsu_putih)))
