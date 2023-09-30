#include <stdio.h>
#include <math.h>

int main(){ 
    int alas = 5;
    int tinggi = 12;
    int simir = sqrt(pow(alas,2)+pow(tinggi,2));
    
printf("diketahui:");
printf("alas = %d\n", alas);
printf("tinggi = %d\n", tinggi);

printf("jawab:\n");
printf("sisi a = %d\n", tinggi);
printf("sisi b = %d\n", simir);
printf("sisi c = %d\n", alas);
printf("keliling %d\n", alas + tinggi + simir);
printf("luas %d\n", (alas * tinggi)/2);

    return 0;
}