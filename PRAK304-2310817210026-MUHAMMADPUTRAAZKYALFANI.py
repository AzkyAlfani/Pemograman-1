for i in range(0, 5):
    n = int(input())
    if n >= 100 or n < 0:
        print("Anda Menginput Melebihi Limit Bilangan")
    elif n >= 20:
        print("Puluhan")
    elif n >= 10:
        print("Belasan")
    elif n >= 1:
        print("Satuan")
    else:
        print("Nol")