angka1, angka2 = map(int, input("Input Angka: ").split())

start, end, step = (angka1, angka2 + 1, 1) if angka1 < angka2 else (angka1, angka2 - 1, -1)

output = " - ".join(f"{i} {angka1 + angka2 - i}" for i in range(start, end, step))
print(output)