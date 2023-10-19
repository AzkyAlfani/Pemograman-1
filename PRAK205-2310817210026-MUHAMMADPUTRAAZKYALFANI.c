#include <stdio.h>
#include <math.h>

int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int c = sqrt(pow(b, 2) - pow(a, 2));
    int k = a + b + c; 
    int l = (c * a)/2; 
    printf("Alas = %d cm\n", c);
    printf("Tinggi = %d cm\n", a);
    printf("Keliling = %d cm\n", k);
    printf("Luas = %d cm^2", l);

    return 0;
}