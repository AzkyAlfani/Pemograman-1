def ngitung(n1, n2, kali, kali1):
    if n1 != n2:
        print("\nJumlah tidak sama")
        return

    for i in range(n1):
        print(kali[i] * kali1[i], end=" ")
    print("\n")

if __name__ == "__main__":
    n1, n2 = map(int, input().split())

    kali = [int(x) for x in input().split()]
    kali1 = [int(x) for x in input().split()]

    print()
    ngitung (n1, n2, kali, kali1)
