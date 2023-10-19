#include <stdio.h>

int main() {
    char nama[50], nim[15], kelas_paralel[10], tempat_lahir[50], tanggal_lahir[11], alamat[100], hobby[50], no_hp[15];

    printf("Nama : ");
    gets(nama);
    printf("NIM : ");
    gets(nim);
    printf("Kelas Paralel : ");
    gets(kelas_paralel);
    printf("Tempat Lahir : ");
    gets(tempat_lahir);
    printf("Tanggal Lahir (dd-mm-yyyy) : ");
    gets(tanggal_lahir);
    printf("Alamat : ");
    gets(alamat);
    printf("Hobby : ");
    gets(hobby);
    printf("No. HP : ");
    gets(no_hp);

    printf("Nama : %s\n", nama);
    printf("NIM : %s\n", nim);
    printf("Kelas Paralel : %s\n", kelas_paralel);
    printf("Tempat/Tanggal Lahir : %s/%s\n", tempat_lahir, tanggal_lahir);
    printf("Alamat : %s\n", alamat);
    printf("Hobby : %s\n", hobby);
    printf("No. HP : %s\n", no_hp);

    return 0;
}
