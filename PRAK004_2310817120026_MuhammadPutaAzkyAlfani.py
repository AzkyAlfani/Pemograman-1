# Menghitung panjang teks "Nama Anda" dan "NIM"
nama = " Muhammad Putra Azky Alfani "
nim = "2310817210026"
panjang_teks = max(len(nama), len(nim)) + 2

# Cetak output
print("#" * panjang_teks)
print("#" + " " * (panjang_teks - 2) + "#")
print("#" + nama.center(panjang_teks - 2) + "#")
print("#" + nim.center(panjang_teks - 2) + "#")
print("#" + " " * (panjang_teks - 2) + "#")
print("#" * panjang_teks)
