import math
prot = input()
inprot = prot.split()
a, b = map(int, inprot)
c = math.sqrt(b**2-a**2)#rumus pythagoras untuk mencari alas
keliling = a + b + c
luas = (1/2) * c * a
print("Alas =", round(c), "cm")
print("Tinggi =", a, "cm")
print("Keliling =", round(keliling), "cm")
print("Luas =", round(luas), "cm^2")


a = int(input())
b = int(input())
c = math.sqrt(b**2-a**2)
keliling = a + b + c
luas = (1/2) * c * a
print("Alas =", round(c), "cm")
print("Tinggi =", a, "cm")
print("Keliling =", round(keliling), "cm")
print("Luas =", round(luas), "cm^2")