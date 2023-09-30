#include <stdio.h>

int main (){
    float a = 9;
    float b = 6;
    float x = 10;
    float y = 7;

    float hasil = (a + b) * x / y;

    printf("variabel a bernilai %.0f\n", a);
    printf("variabel b bernilai %.0f\n", b);
    printf("variabel x bernilai %.0f\n", x);
    printf("variabel y bernilai %.0f\n", y);
    printf("hasil dari a ditambah b dikali x dibagi y adalah %.2f\n", hasil);

    return 0;
}