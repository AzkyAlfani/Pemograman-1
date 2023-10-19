#include <stdio.h>
#include <math.h>
int main(){
    float r, h;
    scanf("%f", &r);
    scanf("%f", &h);
    float v = (22 * pow(r,2) * h)/7;
    float l = (2 * 22 * r)/7 * (r + h);
    float k = (2 * 22 * r)/7;
    printf("Volume = %.2f\n", v);
    printf("Luas = %.2f\n", l);
    printf("Keliling = %.2f\n", k);
    return 0;
}