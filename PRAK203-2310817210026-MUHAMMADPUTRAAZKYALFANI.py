baris = input() 
var = baris.split() 
a, b, i, j, x, y = map(int, var) 
hasil = (a - b) * i / j - (x + y) 
print(f'{hasil:.3f}') 


baris1= input()
var1 = baris1.split()
a, b = map(int, var1)


baris2= input()
var2 = baris2.split()
i, j = map(int, var2)

baris3= input()
var3 = baris3.split()
x, y = map(int, var3)

hasil = (a - b) * i / j - (x + y) 
print(f'{hasil:.3f}')