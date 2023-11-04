for i in range(0, 5):
    detik = int(input())
    jam = detik // 3600
    menit = (detik % 3600) // 60
    detik = detik % 60
    if jam >= 24:
        hari = jam // 24
        jam = jam % 24
        print(f'{hari} hari {jam:02}:{menit:02}:{detik:02}')
    else:
        print(f'{jam:02}:{menit:02}:{detik:02}')