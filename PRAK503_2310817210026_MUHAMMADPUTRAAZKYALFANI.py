def main():
    batas = 0
    maks = -100000
    minim = 100000

    bilangan = int(input())
    values = list(map(int, input().split()))

    while batas < bilangan:
        nilai = values[batas]
        maks = max(maks, nilai)
        minim = min(minim, nilai)
        batas += 1

    print(f"{maks} {minim}")

if __name__ == "__main__":
    main()
