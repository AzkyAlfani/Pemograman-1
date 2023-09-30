#include <stdio.h>

int main(){
    int a = 4;
    int b = 5;
    int c = 7;
    int keliling = a + b + c;
    int harga = 85000;

    printf("diketahui:");
    printf("panjang sisi segitiga adalah %d, %d, dan %d\n" ,a,b,c);
    printf("keliling tanah pak dengklek adalah %d\n" , keliling);
    printf("harga tanah per meter adalah %d\n" ,harga);
    printf("jawaban:\n");
    printf("biaya yang diperlukan adalah %d\n" , keliling * harga);
    
        return 0;
}