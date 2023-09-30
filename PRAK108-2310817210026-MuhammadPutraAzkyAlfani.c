#include <stdio.h>

int main(){
    float a = 5;
    float b = 14;
    float kl = b / a;

    printf("diketahui:");
    printf("pak dengklek mengelilingi taman = %.f putaran \n", a);
    printf("jarak tempuh pak dengklek = %.f kilometer \n", b);

    printf("jawaban:\n");
    printf("jari jari taman yang dikelilingi pak dengklek adalah %.2f\n", kl/(2*3.14) );
        return 0;

}
