#include <stdio.h>

int main() {
    int a = 4;
    int b = 8;
    int c = 3;

    int hasil1 = (a == b);
    int hasil2 = (b > c);
    int hasil3 = (a != c);

    printf("variabel a bernilai %d\n", a);
    printf("variabel b bernilai %d\n", b);
    printf("variabel c bernilai %d\n", c);
    printf("apakah a sama dengan b ? jawabannya adalah %d\n", hasil1);
    printf("apakah b lebih besar dari c ? jawabannya adalah %d\n", hasil2);
    printf("apakah a tidak sama dengan c ? jawabannya adalah %d\n", hasil3);

    return 0;
}