def konversi_nilai(nilai):
    if nilai >= 90:
        return "A"
    elif nilai >= 70:
        return "B"
    elif nilai >= 60:
        return "C"
    elif nilai >= 50:
        return "D"
    else:
        return "E"

nilai = int(input("Masukkan nilai: "))

hasil_konversi = konversi_nilai(nilai)

print("Hasil konversi nilai:", hasil_konversi)
