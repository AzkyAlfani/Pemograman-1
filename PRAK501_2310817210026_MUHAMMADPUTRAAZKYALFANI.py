def max_bilangan(x, y, z, w):
    max_val = x

    if y > max_val:
        max_val = y
    if z > max_val:
        max_val = z
    if w > max_val:
        max_val = w

    return max_val

def main():
    a, b, c, d = map(int, input().split())

    result = max_bilangan(a, b, c, d)

    print(result)

if __name__ == "__main__":
    main()
