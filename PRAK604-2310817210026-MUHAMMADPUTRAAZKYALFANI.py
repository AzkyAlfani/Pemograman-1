def eve(code, message):
    result = ''
    star = 0
    hashtag = 0

    for i in range(len(code)):
        if code[i] == ' ' and message[i] == ' ':
            result += ' '
        elif code[i] == message[i]:
            result += '*'
            star += 1
        else:
            result += '#'
            hashtag += 1

    return result, star, hashtag


if __name__ == "__main__":
    code = input().rstrip('\n')
    message = input().rstrip('\n')

    if len(code) != len(message):
        print("\nPanjang kalimat berbeda, pesan palsu")
        exit()

    result, star, hashtag = eve(code, message)

    print("\n")
    print(result)
    print("* = {}".format(star))
    print("# = {}".format(hashtag))

    if star >= hashtag:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")
