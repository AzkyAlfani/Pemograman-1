import math
alas = 5
tinggi = 12
simir = round(math.sqrt(alas**2 + tinggi**2))

print("diketahui:")
print("alas =", alas,"cm")
print("tinggi =", tinggi,"cm")

print("sisi a =", tinggi)
print("sisi b =", simir)
print("sisi c =", alas)
print("keliling =", alas + tinggi + simir)
print("luas =", (round(alas * 0.5 * tinggi)))
