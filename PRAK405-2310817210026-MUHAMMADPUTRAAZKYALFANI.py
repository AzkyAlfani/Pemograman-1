for i in range(3):
    n, k = map(int, input().split())
    sumAll = 0
    for i in range(1, n+1):
        sumLine = 0
        for j in range(i, 0, -1):
            h = j * k
            sumLine += h
            print(f"({j} * {k})", end="")
            if j > 1:
                print(" + ", end="")
        sumAll += sumLine
        print(f" = {sumLine}")
    print(sumAll)