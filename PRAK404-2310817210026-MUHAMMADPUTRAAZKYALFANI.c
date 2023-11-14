#include <stdio.h>
int main(){
    float x, y, pilihan;
    while(1){
        printf("Pilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
        printf("Masukkan Pilihan: ");
        scanf("%f", &pilihan);
        if(pilihan == 5){
            printf("Terimakasih, telah menggunakan kalkulator AL");
            break;
        }else if (pilihan == 1){
            printf("Masukkan nilai pertama: ");
            scanf("%f", &x);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &y);
            printf("Hasil penjumlahan antara %.2f dan %.2f adalah %.2f", x, y, x + y);
        }else if(pilihan == 2){
            printf("Masukkan nilai pertama: ");
            scanf("%f", &x);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &y);
            printf("Hasil pengurangan antara %.2f dan %.2f adalah %.2f", x, y, x - y);  
        }else if(pilihan == 3){
            printf("Masukkan nilai pertama: ");
            scanf("%f", &x);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &y);
            printf("Hasil perkalian antara %.2f dan %.2f adalah %.2f", x, y, x * y);
        }else if(pilihan == 4){
            printf("Masukkan nilai pertama: ");
            scanf("%f", &x);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &y);
            printf("Hasil pembagian antara %.2f dan %.2f adalah %.2f", x, y, x / y);
        }else{
            printf("Input anda salah, silahkan coba lagi\n");
        }
                
            }
            return 0;
        }