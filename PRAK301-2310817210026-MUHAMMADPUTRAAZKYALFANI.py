num1 = int(input("Masukkan angka pertama: "))
num2 = int(input("Masukkan angka kedua: "))

if num1 > num2:
    num1, num2 = num2, num1

print("Angka terurut:", num1, num2)
